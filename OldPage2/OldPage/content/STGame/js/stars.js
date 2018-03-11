 


//create stars on the screen move them and make them random
var stars = {
    start : function() {//initialize 100 stars and make their positions random
        this.pause = 0;
        this.star_speed = 3;
        this.x = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0];
        this.y = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0];
        var j = 0;
        for(j = 0;j < 100;j++) {
            this.x[j] = Math.floor((Math.random()*drawable_surface.canvas.width)+1);
            this.y[j] = Math.floor((Math.random()*drawable_surface.canvas.height)+1);
        }
    },
    render : function() {//scrolls stars and makes new random stars appear
        ctx = drawable_surface.context;//as old stars leave the display
        ctx.fillStyle = "white";
        var j = 0;
        for(j = 0;j < 100;j++) {
            if(this.pause === 0) {
                if(this.x[j] > this.star_speed) {
                    this.x[j]-=this.star_speed;
                }
                else {
                    this.x[j] = drawable_surface.canvas.width-(this.x[j]+this.star_speed);
                    this.y[j] = Math.floor((Math.random()*drawable_surface.canvas.height)+1);
                }
            }
            ctx.fillRect(this.x[j],this.y[j],2,2);
        }
    }
}

var asteroid = {
    start : function () {
        this.spawn = 0;
        this.asteroid_speed = 4;
        this.x = drawable_surface.canvas.width;
        this.y = justify_vert(Math.floor((Math.random()*drawable_surface.canvas.height)+1));
    },
    render : function () {
        if(this.spawn === 1) {
            document.getElementById("sensor-display").innerHTML = "Incoming asteroid on short range sensors";
            ctx = drawable_surface.context;
            var img = document.getElementById("asteroid");
            ctx.drawImage(img,this.x,this.y);
            this.x-= this. asteroid_speed;
            if (this.x < -100) {
                this.spawn = 0;
            }
        }
    },
    spawn_asteroid : function () {
        this.spawn = 1;
        this.asteroid_speed = Math.floor((Math.random()*5)+5);
        this.x = drawable_surface.canvas.width;
        this.y = justify_vert(Math.floor((Math.random()*drawable_surface.canvas.height)+1));
    }
}
