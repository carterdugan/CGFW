#include "TimeStep.hpp"

cgfw::TimeStep::TimeStep(sf::RenderWindow* window) {
    win = window;
}

cgfw::TimeStep::~TimeStep() {
    
}

void cgfw::TimeStep::tick() {
    dt = clock.restart().asSeconds();
}

void cgfw::TimeStep::setFPS(float frames_per_second) {
    fps = frames_per_second;
    win->setFramerateLimit(fps);
}

void cgfw::TimeStep::setSpeed(float game_speed) {
    speed = game_speed;
}

float cgfw::TimeStep::getMultiplier() {
    return speed * dt;
}