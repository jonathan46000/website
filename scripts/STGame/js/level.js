 
//------------------level and  spawn control----------------------
function level() {
        this.asteroid_spawn = 1;
        this.spawn_counter = 1000;
        this.spawn_count = 8;
        this.game_over = "NO";
        this.alien = new alien();
        this.update = function() {
            if(this.alien.alive === "YES") {
                this.alien.update();
            }
            asteroid.render();
            if(this.alien.alive === "NO" && this.spawn_count > 0 ) {
                if(asteroid.spawn === 0 && this.spawn_count > 1) {
                    this.asteroid_spawn--;
                }
                if(this.spawn_count > 0){
                    this.spawn_counter--;
                }
                if(this.asteroid_spawn === 0 && asteroid.spawn === 0 && this.spawn_count > 0) {
                    asteroid.spawn_asteroid();
                    this.asteroid_spawn = Math.floor((Math.random()*50)+100);
                }
                if(this.spawn_counter === 0 && this.spawn_count > 0) {
                    this.spawn_count--;
                    if(this.spawn_count > 0) {
                        this.alien.reset();
                    }
                    this.spawn_counter = Math.floor(Math.random()*1000+1);
                }
                if(asteroid.spawn === 0) {//use this for asteroid conditional
                    document.getElementById("sensor-display").innerHTML = "Long range sensors detect no hazards";
                }
            }
            var score = "Score: ";
            score += game_score;
            ctx = drawable_surface.context;
            ctx.font = "20px Arial";
            ctx.fillStyle = "red";
            ctx.fillText(score, drawable_surface.canvas.width-100, 20);
        }
        
        this.set_game_over = function() {
            this.game_over = "YES";
        }
        
        this.check_game_over = function() {
            if(this.game_over === "YES") {
                drawable_surface.clear();
                ctx = drawable_surface.context;
                ctx.font = "50px Arial";
                ctx.fillStyle = "red";
                ctx.fillText("GAME OVER",200,200);
                var score = "Score: ";
                score += game_score;
                score += " press space to restart";
                ctx.font = "20px Arial";
                ctx.fillText(score, 200, 230);
                
            }
        }
        
        this.check_next_level = function() {
            if(this.spawn_count < 1) {
                if(score_check === 0) {
                    game_score += 20*game_level;
                }
                score_check = 1;
                drawable_surface.key = 32;
                drawable_surface.clear();
                ctx = drawable_surface.context;
                ctx.font = "50px Arial";
                ctx.fillStyle = "blue";
                ctx.fillText("Welcome to starbase",135,200);
                ctx.font = "20px Arial";
                ctx.fillText("press space for next level",260,230);
                var score = "Score: ";
                score += game_score;
                ctx.fillText(score, 310, 260);
            }
        }
        
        this.start_new_level = function() {
            score_check = 0;
            game_level++;
            drawable_surface.clear();
            this.asteroid_spawn = 1;
            this.spawn_counter = 1000;
            this.spawn_count = 8+game_level;
            this.game_over = "NO";
            this.alien.reset();
            ship_object.torpedoes = 10;
            ship_object.phasers = 100;
            ship_object.health = 100;
            ship_object.shields = 100;
            var k;
            for(k = 0; k++ ;k < 10) {
                ship_object.torpedox[k] = 0;
                ship_object.torpedoy[k] = 0;
            }
        }
}
