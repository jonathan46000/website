
//-------------[Global Functions]----------------------
function justify_vert(yaxis) {
    var y = yaxis;
    if(y > 75) {
        y -= 60;
    }
    if(y < 10) {
        y = 10;
    }
    return y;
}
        
function check_bounding_box(x,y,tx,ty) {
    if(tx > x && tx < (x + 200)) {
        if(ty > y && ty < (y + 50)) {
            return "HIT";
        }
    }
    else {
        return "MISS";
    }
}

function play_sound(soundId) {
    var audio = document.getElementById(soundId);
    audio.volume = "0.1";
    audio.play();
}

function background_music() {
    if(music_set === 0) {
        backgroundAudio.pause();
        if(current_level.alien.alive === "YES") {
            backgroundAudio = document.getElementById("battle");
        }
        else {
            backgroundAudio = document.getElementById("cruising");
        }
        backgroundAudio.volume = "0.1";
        backgroundAudio.play();
    }
    music_set = 1;
}
