#include "TimeStep.hpp"

cgfw::TimeStep::TimeStep(sf::RenderWindow* window, float frames_per_second, float game_speed) {
    fps = frames_per_second;
    speed = game_speed;
    dt = 0;

    window->setFramerateLimit(frames_per_second);
}

cgfw::TimeStep::~TimeStep() {
    
}

void cgfw::TimeStep::tick() {
    dt = clock.restart().asSeconds();
}

float cgfw::TimeStep::getMultiplier() {
    return speed * dt;
}