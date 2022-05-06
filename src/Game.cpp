#include "Game.hpp"

cgfw::Game::Game(GameState* main_state) :
    window(sf::VideoMode(WINDOW_WIDTH_DEFAULT, WINDOW_HEIGHT_DEFAULT), WIN_TITLE, sf::Style::Titlebar | sf::Style::Close),
    time_step(&window) {

    time_step.setFPS(FPS_DEFAULT);
    time_step.setSpeed(GAME_SPEED_DEFAULT);

    win_width = WINDOW_WIDTH_DEFAULT;
    win_height = WINDOW_HEIGHT_DEFAULT;

    current_state = main_state;

}

cgfw::Game::~Game() {

}

void cgfw::Game::run() {

    while(window.isOpen()) {
        tick();
        render();
    }
}

void cgfw::Game::tick() {

    input_handler.tick(&window);
    time_step.tick();

    current_state->tick(this);

}

void cgfw::Game::render() {
    window.clear();

    // Draw here
    current_state->render(&window);
    // Stop drawing

    window.display();
}

cgfw::InputHandler cgfw::Game::getInputHandler() {
    return input_handler;
}

cgfw::TimeStep cgfw::Game::getTimeStep() {
    return time_step;
}

cgfw::GameState* cgfw::Game::getGameState() {
    return current_state;
}

void cgfw::Game::setGameState(GameState* game_state) {
    current_state = game_state;
}