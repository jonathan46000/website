/*-----------------------------[GNU GPL]---------------------------------
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, version 3.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 *----------------------------------------------------------------------*/

/*------------------------------[Author]---------------------------------
 *
 *   Author: Jonathan46000
 *   Date:   Jul 5 2016
 *   License:GPL v3
 * 
 *----------------------------------------------------------------------*/ 


var brush_object;

function init_app() {
    brush_object = new brush_tool(5, 5, "black", 10, 120);//ad new brush_tools here
    drawable_surface.start();//create surface and start app
}

var drawable_surface = {
    canvas : document.createElement("canvas"),
    
    //functions to be used for this object    
    border: function() {
        this.context.beginPath();
        this.context.strokeStyle = this.border_color;
        this.context.lineWdith = this.border_width;
        this.context.rect(1,1,this.canvas.width-2,this.canvas.height-2);
        this.context.stroke();
    },
    
    //initialization function
    start : function() {
        //Object value initialization
        //this.canvas.style.cursor = "none"; //hide the original cursor
        this.canvas.width = 720;
        this.canvas.height = 400;
        this.border_color = "red";
        this.border_width = "2";
        this.mousedown = 0;
        this.canvas.style.backgroundColor = "white";
        
        //object values initialized by functions
        this.context = this.canvas.getContext("2d");
        document.body.insertBefore(this.canvas, document.body.childNodes[0]);
        this.interval = setInterval(main_loop, 20);
        
        //object initialization functions
        this.border();
        
        //object events
        window.addEventListener('mousemove', function (e) {
            drawable_surface.x = e.pageX;
            drawable_surface.y = e.pageY;
        })
        window.addEventListener('mousedown', function () {
            drawable_surface.mousedown = 1;
        })
        window.addEventListener('mouseup', function() {
            drawable_surface.mousedown = 0;
        })
    }, 
    clear : function(){
        this.context.clearRect(0, 0, this.canvas.width, this.canvas.height);
        this.border();
    }
}

function brush_tool(width, height, color, x, y) {
    this.width = width;
    this.height = height;
    this.speedX = 0;
    this.speedY = 0;    
    this.x = x;
    this.y = y;
    this.brush_color = "black";
    this.shape = "circle";
    this.update = function() {
        ctx = drawable_surface.context;
        ctx.fillStyle = this.brush_color;
        if(this.shape === "rectangle"){
            ctx.fillRect(this.x, this.y, this.width, this.height);
        }
        if(this.shape === "circle"){
            ctx.beginPath();
            ctx.arc(this.x, this.y, this.width/2, 0, Math.PI*2, true);
            ctx.closePath();
            ctx.fill();
        }
    },
    this.brush = function() {
        if (drawable_surface.x && drawable_surface.y && drawable_surface.mousedown === 1) {
            this.x = drawable_surface.x-10;
            this.y = drawable_surface.y-10;
            this.update();
        }
    },
    
    this.set_brush_color = function (color) {
        this.brush_color = color;
    },
    
    this.brush_size_up = function () {
        this.height+=2;
        this.width+=2;
    },
    
    this.brush_size_dn = function () {
        if(this.width > 1){
            this.height-=2;
            this.width-=2;
        }
    },
    
    this.set_brush_type = function (brush_type) {
        this.shape = brush_type;
    }
    
}

function main_loop() {
    //drawable_surface.clear();
    brush_object.brush();
}
