#ifndef MAINSTATE_H
#define MAINSTATE_H

#include "GameState.hpp"

class MainState : public cgfw::GameState {

public:

    MainState();

    virtual void tick(cgfw::Game* game);
    virtual void render(sf::RenderWindow* window);

private:

    sf::CircleShape player;
    sf::CircleShape enemy;

};

#endif