#include "InputHandler.hpp"

cgfw::InputHandler::InputHandler() {
    keys = new bool[0xFF];
    mstates = new int[5];

    clicked = true;
}


cgfw::InputHandler::~InputHandler() {
}


void cgfw::InputHandler::setKey(unsigned char index, bool pressed) {
    keys[index] = pressed;
}


bool cgfw::InputHandler::keyPressed(unsigned char index) {
    return keys[index];
}


int cgfw::InputHandler::mousePressed(unsigned char index) {
    return mstates[index];
}


bool cgfw::InputHandler::mouseHover(sf::RenderWindow* window, float x, float y, float width, float height) {

    sf::Vector2i mouse = sf::Mouse::getPosition(*window);

    return mouse.x >= x && mouse.x <= x + width && mouse.y >= y && mouse.y <= y + height;
}


bool cgfw::InputHandler::mouseHover(sf::RenderWindow* window, float x, float y, float radius) {

    sf::Vector2i mouse = sf::Mouse::getPosition(*window);

    return mouse.x >= x - radius && mouse.x <= x + radius && mouse.y >= y - radius && mouse.y <= y + radius;
}


void cgfw::InputHandler::tick(sf::RenderWindow* window) {

    if(clicked) {
        clicked = false;
        for(int i = 0; i < 5; i++)
            mstates[i] = IDLE;
    }

    sf::Event event;
    while(window->pollEvent(event)) {

        if(event.type == sf::Event::Closed)
            window->close();
        if(event.type == sf::Event::KeyPressed)
            keys[event.key.code] = true;
        if(event.type == sf::Event::KeyReleased)
            keys[event.key.code] = false;

        if(event.type == sf::Event::MouseButtonPressed) 
            mstates[event.mouseButton.button] = PRESSED;
        else if(event.type == sf::Event::MouseButtonReleased) {
            mstates[event.mouseButton.button] = RELEASED;
            clicked = true;
        }

    }
}