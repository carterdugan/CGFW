/*
Author:         Carter Dugan
Date Created:   5/8/22

GameState is an abstract class that is inherited by classes made
by the user. Each game state has virtual tick() and render()
methods.

*/


#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <SFML/Graphics.hpp>

namespace cgfw {

// Forware declaration of game class.
class Game;

class GameState {
public:

    // Game logic goes here.
    virtual void tick(Game* game);

    // All rendering should go here.
    virtual void render(sf::RenderWindow* window);
private:
protected:
};

}

#include "Game.hpp"

#endif