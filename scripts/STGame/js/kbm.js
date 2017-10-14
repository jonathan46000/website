//------------------game main loop---------------------------------------

function main_loop() {
    current_level.check_game_over();
    if(drawable_surface.pause) {
        drawable_surface.clear();
        stars.render();
        ship_object.render();
        current_level.update();
        background_music();
    }
    current_level.check_next_level();
}
