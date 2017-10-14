 //initialize application(later will include arguments for specifics based on a global level var
var game_level = 1;
var game_score = 0;
var score_check = 0;
var music_set = 0;
var backgroundAudio = document.getElementById("battle");

window.onload = function() {
    init_app();
}

function init_app() {
    current_level = new level();//create level control object
    ship_object = new ship();//create new player
    drawable_surface.start();//create surface and start app
    stars.start();//start the stars up
    asteroid.start();//start asteroid generation and rendering
}
