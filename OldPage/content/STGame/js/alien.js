function alien() {
        this.alive = "YES";
        this.cloaked = Math.floor((Math.random()*10)+1);
        this.decloak = 200;
        this.x = drawable_surface.canvas.width;
        this.y = justify_vert(Math.floor((Math.random()*drawable_surface.canvas.height)+1));
        this.speed = Math.floor((Math.random()*4)+game_level);
        this.shields = 20*game_level;
        this.shield_status = "ON"
        this.health = 20*game_level;
        this.torpedos = Math.floor((Math.random()*100)+1);
        this.torpedox = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0];
        this.torpedoy = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                         0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0];
        this._ShieldVar = 0;
        this._hitVar = 0;
        
        this.reset = function () {
            music_set = 0;
            this.alive = "YES";
            this.cloaked = Math.floor((Math.random()*10)+1);
            this.decloak = 200;
            this.x = drawable_surface.canvas.width;
            this.y = justify_vert(Math.floor((Math.random()*drawable_surface.canvas.height)+1));
            this.speed = Math.floor((Math.random()*4)+game_level);
            this.shields = 20*game_level;
            this.shield_status = "ON"
            this.health = 20*game_level;
            this.torpedos = Math.floor((Math.random()*100)+1);
            var j = 0;
            for(j=0;j<100;j++) {
                this.torpedox[j] = 0;
                this.torpedoy[j] = 0;
            }
            this._ShieldVar = 0;
            this._hitVar = 0;
        }
        
        this.entry = function () {//handles spawning of cruiser and decloaking
            if(this.cloaked < 5) 
            {   
                this.decloak = 0;
                this.cloaked = 0;
            }
            
            if(this.x > drawable_surface.canvas.width-200){
                if(this.decloak === 0) {
                    if(this.x <= (drawable_surface.canvas.width-100)) {
                        stars.pause = 1;
                    }
                }
                else {
                    stars.pause = 0;
                }
            }
            else {
                if(this.decloak < 40) {
                    if(this.decloak < 2) {
                        stars.pause = 1;
                    }
                }
            }
            
            if(this.decloak > 0) {
                this.decloak--;
            }
        }
        
        this.AI_move = function () {
            if(this.health < 20) {//AI Run
                if((this.x-ship_object.x) < 250) {
                    if(this.x < (drawable_surface.canvas.width-200)) {
                        this.x += this.speed;
                    }
                    if((this.y-ship_object.y) > 0) {
                        if((this.y-ship_object.y) > 80) {
                            if(this.y < (drawable_surface.canvas.height-50)) {
                                this.y += this.speed;
                            }
                        }
                    }
                    else {
                        if((ship_object.y-this.y) > 80) {
                            if(this.y > 0){
                                this.y -= this.speed;
                            }
                        }
                    }
                }
            }
            else {//AI Attack
                if((this.y - ship_object.y) > 0) {
                    if((this.y - ship_object.y) > 20) {
                        this.y -= this.speed;
                    }
                }
                else {
                    if((ship_object.y-this.y) > 20) {
                        this.y += this.speed;
                    }
                }
                if((this.x - ship_object.x) > 350) {
                    this.x -= this.speed;
                }
                else if((this.x - ship_object.x) < 280){
                    this.x += this.speed;
                }
            }
        }
        
        this.AI_fire = function () {
            
            if(Math.floor(Math.abs(this.y-ship_object.y)) < 35 
                && (Math.floor(Math.random()*40)+1) < 2 
                && this.decloak === 0) {
                if(this.torpedos > 0){
                //reduces number of torpedoes
                    this.torpedos--;
                    play_sound("klingonTorp");
                    //sets torpedoes relative to ships so that they show
                    //coming out of tube.  Also torpedoes with an X > 0
                    //update
                    this.torpedox[this.torpedos] = this.x;
                    this.torpedoy[this.torpedos] = this.y+25;
                }
            }
            
            var j = 0;
            for(j = 0; j < 100; j++) {
                if(this.torpedox[j] > 0 && 
                   this.torpedox[j] < drawable_surface.canvas.width) {
                    ctx.fillStyle = "red";
                    ctx.fillRect(this.torpedox[j],this.torpedoy[j],6,3);
                    this.torpedox[j]-=8;
                }
                if(check_bounding_box(ship_object.x,ship_object.y,this.torpedox[j],this.torpedoy[j]) === "HIT") {
                    ship_object.toredo_hit();
                    this.torpedox[j] = 0;
                    this.torpedoy[j] = 0;
                }
            }
         
            
            
        }
        
        this.update = function() {
            if(this.alive === "YES") {
                this.entry();
                //this.check_asteroid_colision();
                this.AI_move();
                this.AI_fire();
                
                if(this.decloak < 40) {
                    ctx = drawable_surface.context;
                    var img = document.getElementById("decloak");
                    if(this.decloak < 2) {
                        img = document.getElementById("klingon");
                        document.getElementById("sensor-display").innerHTML = "Klingon Battle Cruiser Detected";
                    }
                    if(this.decloak > 2) {
                        document.getElementById("sensor-display").innerHTML = "Klingon Battle Cruiser Decloaking";
                        play_sound("decloaks");
                    }
                    if(this._ShieldVar > 0 && this._hitVar === 0) {
                        img = document.getElementById("klingonS");
                        this._ShieldVar--;
                    }
                    if(this._hitVar > 0) {
                        img = document.getElementById("klingonD");
                        this._hitVar--;
                    }
                    ctx.drawImage(img,this.x,this.y);
                }
            }
            
        }
        
        this.phaser_hit = function() {
            if(this.shields > 1) {
                this._ShieldVar = 10;
                this.shields -= 1;
            }
            else if(this.shields < 1 && this.shields > 0){
                this._ShieldVar = 10;
                this.shields = 0;
            }
            else {
                this._hitVar = 10;
                this.health -= 1;
            }
            if(this.health < 1) {
                this.die();
                game_score += 10;
            }
            game_score++;
        }
        
        this.toredo_hit = function() {
            if(this.shields > 10) {
                this._ShieldVar = 10;
                this.shields -= 10;
                play_sound("shieldhit");
            }
            else if(this.shields < 10 && this.shields > 0){
                this._ShieldVar = 10;
                this.shields = 0;
                play_sound("shieldhit");
            }
            else {
                this._hitVar = 10;
                this.health -= 10;
                play_sound("hullhit");
            }
            if(this.health < 1) {
                this.die();
                game_score += 10;
            }
            game_score += 5;
        }
        
        this.die = function() {
            this.alive = "NO";
            stars.pause = 0;
            music_set = 0;
        }
        
        this.check_asteroid_colision = function () {
            if(Math.abs((this.x+100)-asteroid.x) < 100 
               && Math.abs(this.y-asteroid.y) < 50 
               && asteroid.x < drawable_surface.canvas.width-50 
               && this.decloak < 2) {
                this.shields = 0;
                this.health = 0;
                this._hitVar = 10;
                this.die();
            }
        }
        
}
