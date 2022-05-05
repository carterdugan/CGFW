#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <SFML/Graphics.hpp>

namespace cgfw {

    class Game;

    class GameState {
    public:
        virtual void tick(Game* game);
        virtual void render(sf::RenderWindow* window);
    private:
    protected:
    };

}

#include "Game.hpp"

#endif