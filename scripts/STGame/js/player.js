 
//-------------------creates the player as a ship object-----------------------
function ship() {
        this.x = drawable_surface.canvas.width/4;//start in middle of screen
        this.y = drawable_surface.canvas.height/2-50;
        this.speed = 4;//manuevering speed
        this.shields = 100;//shield strength
        this.shield_status = "OFF";//shields up or down
        this.health = 100;// hull strength
        this.phasers = 100;// phaser power
        this.torpedos = 10;// torpedo compliment
        this.torpedox = [0,0,0,0,0,0,0,0,0,0];//location of torpedoes
        this.torpedoy = [0,0,0,0,0,0,0,0,0,0];//location of torpedoes
        this._ShieldVar = 0;//variable for effet shouldn't be touched
        this._hitVar = 0;
        
        //update ship location and torpedo location
        this.update = function() {
            this.check_asteroid_colision();
            ctx = drawable_surface.context;
            var img = document.getElementById("ship1");
            ctx.drawImage(img,this.x,this.y);
            var j = 0;
            for(j = 0; j < 10; j++) {
                if(this.torpedox[j] > 0 && 
                   this.torpedox[j] < drawable_surface.canvas.width) {
                    ctx.fillStyle = "red";
                    ctx.fillRect(this.torpedox[j],this.torpedoy[j],6,3);
                    this.torpedox[j]+=8;
                }
                if(check_bounding_box(current_level.alien.x,current_level.alien.y,
                                      this.torpedox[j],this.torpedoy[j]) === "HIT"
                                      && current_level.alien.alive === "YES") {
                    current_level.alien.toredo_hit();
                    this.torpedox[j] = 0;
                    this.torpedoy[j] = 0;
                }
            }
        }
        
        //get and process keypress events and update output
        this.render = function() {
            if(drawable_surface.key !== 78){
                //process key inputs
                switch(drawable_surface.key) {
                    case 87://move in a given direction
                        this.y-=this.speed;
                        break;
                    case 83:
                        this.y+=this.speed;
                        break;
                    case 65:
                        this.x-=this.speed;
                        break;
                    case 68:
                        this.x+=this.speed;
                        break;
                    case 85://increase speed update speedometer
                        if(this.speed < 26) {
                            this.speedometer();
                            this.speed++;
                        }
                        break;
                    case 73://decrease speed update speedometer
                        if(this.speed > 0){
                            this.speedometer();
                            this.speed--;
                        }
                        break;
                    case 74:
                        if(this.torpedos > 0){
                            //reduces number of torpedoes
                            this.torpedos--;
                            //sets torpedoes relative to ships so that they show
                            //coming out of tube.  Also torpedoes with an X > 0
                            //update
                            this.torpedox[this.torpedos] = this.x+120;
                            this.torpedoy[this.torpedos] = this.y+25;
                            drawable_surface.key = 78;
                            //torpedo indicator update
                            this.torpedo_indicator();
                            play_sound("torpedoSound");
                        }
                        break;
                    case 75:
                        if(this.phasers > 40) {//renders/fires phasers
                            play_sound("phaser");
                            ctx.fillStyle = "yellow";
                            if(Math.abs(this.y-current_level.alien.y) < 15
                               && current_level.alien.alive === "YES") {
                                ctx.fillRect(this.x+155,this.y+20,
                                             current_level.alien.x-this.x-150,3);
                                current_level.alien.phaser_hit();
                            }
                            else {
                                ctx.fillRect(this.x+155,this.y+20,
                                            drawable_surface.canvas.width-this.x,
                                            3);
                            }
                        }
                        if(this.phasers > 0) {//decrements phaser power while in use
                            this.phasers-=3;
                            this.phaser_indicator();//phaser power gage
                        }
                        break;
                    case 76:
                        this.shieldsUp_Dn();//turns shields on/off
                        drawable_surface.key = 78;
                        break;
                }       
                if(this.x < 0){//game bounding box width
                    this.x = 0;
                }
                if(this.x > drawable_surface.canvas.width-200){//game bounding box width
                    this.x = drawable_surface.canvas.width-200;
                }
                if(this.y < 0){//game boudning box height
                    this.y = 0;
                }
                if(this.y > drawable_surface.canvas.height-50){//game bounding box height
                    this.y = drawable_surface.canvas.height-50;
                }
            }
            
            this.update();//displays ship and torpedoes
            
            if(this.phasers < 100) {//increases phaser power while not in use
                this.phasers++;
                this.phaser_indicator();//shows phaser power on screen
            }
            if(this.shield_status === "ON") {
                //makes shield graphics and produces effect
                if(this._ShieldVar > 0 && this.shields > 0) {
                    ctx = drawable_surface.context;
                    var img = document.getElementById("ship1s");
                    ctx.drawImage(img,this.x,this.y);
                    this._ShieldVar--;
                }
                if(this.shields > 10.01){//decrements shields while up
                    this.shields -= 0.01;
                }
            }
            else{
                if(this.shields < 100.01){//increments shields while down
                    this.shields += 0.01;
                }
            }
            if(this._hitVar > 0) {
                ctx = drawable_surface.context;
                var img = document.getElementById("ship1d");
                ctx.drawImage(img,this.x,this.y);
                this._hitVar--;
            }
            this.shield_indicator();
            this.hull_indicator();
        }
        
        //shields on/off
        this.shieldsUp_Dn = function() {
            switch(this.shield_status) {
                case "ON":
                    this.shield_status = "OFF";
                     document.getElementById("shldIndBG").style.backgroundColor = "blue";
                    break;
                case "OFF":
                    if(this.shields > 9.99){
                        play_sound("shieldup");
                        this.shield_status = "ON";
                        document.getElementById("shldIndBG").style.backgroundColor = "#8cff66";
                    }
                    break;
            }
        }
        
        this.check_asteroid_colision = function () {
            if(Math.abs((this.x+100)-asteroid.x) < 100 && Math.abs(this.y-asteroid.y) < 50) {
                this.shields = 0;
                this.health = 0;
                this._hitVar = 10;
                this.die();
            }
        }
        
        this.toredo_hit = function() {
            if(this.shield_status === "ON") {
                this._ShieldVar = 10;
                if(this.shields > 10) {
                    play_sound("shieldhit");
                    this.shields -= 10;
                }
                else if(this.shields < 10 && this.shields > 0){
                    play_sound("shieldhit");
                    this.shields = 0;
                }
                else {
                    this._hitVar = 10;
                    this.health -= 10;
                    play_sound("hullhit");
                }
            }
            else {
                this._hitVar = 10;
                this.health -= 10;
                play_sound("hullhit");
            }
            
            if(this.health < 0) {
                this.die();
            }
            game_score -= 5;
        }
        
        this.die = function() {
            game_score -= 100;
            drawable_surface.pause = 0;
            current_level.set_game_over();
        }
        
        //mouse click to key conversions
        this.move = function(direction) {
            drawable_surface.key = direction;
        }
        
        this.stop = function () {
            drawable_surface.key = 78;
        }
        
        //Ship conidtion indicators and gages
        this.speedometer = function () {
            document.getElementById("speedometer").innerHTML = this.speed;
        }
        
        this.torpedo_indicator = function () {
            document.getElementById("torpedoInd").innerHTML = this.torpedos;
        }
        
        this.phaser_indicator = function () {
            if(this.phasers < 40){
                document.getElementById("phaserInd").innerHTML = "0";
            }
            else {
                var scale = 100/60;
                var phaserPwr = Math.floor((this.phasers - 40)*scale);
                document.getElementById("phaserInd").innerHTML = phaserPwr;
            }
        }
        
        this.shield_indicator = function () {
            document.getElementById("shldInd").innerHTML = Math.floor(this.shields);
        }
        
        this.hull_indicator = function () {
            document.getElementById("hullInd").innerHTML = Math.floor(this.health);
        }
}
