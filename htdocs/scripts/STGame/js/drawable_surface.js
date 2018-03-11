 
var drawable_surface = {
    canvas : document.getElementById("cvs_1"),
    
    //functions to be used for this object    
    border : function() {//creates viewscreen border
        this.context.beginPath();
        this.context.strokeStyle = this.border_color;
        this.context.lineWidth = this.border_width;
        this.context.rect(1,1,this.canvas.width-2,this.canvas.height-2);
        this.context.stroke();
        this.context.lineWidth = 1;
    },
    
    //initialization function
    start : function() {
        //initialize the drawing surface
        this.canvas.width = 720;
        this.canvas.height = 400;
        this.border_color = "red";
        this.border_width = "5";
        this.mousedown = 0;
        this.mouseup = 0;
        this.key = 78;
        this.canvas.style.backgroundColor = "black";
        this.pause = 1;
        this.levelstop = 0;
        
        //object values initialized by functions
        this.context = this.canvas.getContext("2d");
        document.body.insertBefore(this.canvas, document.body.childNodes[0]);
        this.interval = setInterval(main_loop, 20);//create interval for main game loop
        
        //draw viewscreen border
        this.border();
        
        //listener events for game
        window.addEventListener('keydown', function (e) {
            if(e.keyCode !== 32){//if not space bar store event
                drawable_surface.key = e.keyCode;
            }
            else {//if space bar pause game
                drawable_surface.pause_game();
                if(current_level.game_over === "YES"){
                    location.reload();
                }
                else if(this.levelstop === 1) {
                    current_level.start_new_level();
                    this.levelstop = 0;
                }
                if(current_level.spawn_count < 1) {
                    this.levelstop = 1;
                }
            }
        })
        window.addEventListener('keyup', function (e) {
            drawable_surface.key = 78;//store 'n' in key on key release
                                      //'n' is used as the null key for this game
        })
    },
    pause_game : function(){//pause game
        switch(drawable_surface.pause) {
            case 0:
                drawable_surface.pause = 1;
                break;
            case 1:
                drawable_surface.pause = 0;
                backgroundAudio.pause();
                music_set = 0;
                break;
        }
    },
    clear : function(){//clear canvas
        this.context.clearRect(0, 0, this.canvas.width, this.canvas.height);
        this.border();
    }
}
