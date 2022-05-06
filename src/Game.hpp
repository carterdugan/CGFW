#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>

#include "InputHandler.hpp"
#include "TimeStep.hpp"
#include "GameState.hpp"

#define WIN_TITLE "CGFW"
#define WINDOW_WIDTH_DEFAULT 500
#define WINDOW_HEIGHT_DEFAULT 500
#define FPS_DEFAULT 60
#define GAME_SPEED_DEFAULT 60

namespace cgfw {

class Game {

    public:
        Game(GameState* main_state);
        ~Game();

        void run();

        InputHandler getInputHandler();
        TimeStep getTimeStep();
        GameState* getGameState();
        void setGameState(GameState* game_state);

    private:

        float win_width, win_height;
        InputHandler input_handler;
        sf::RenderWindow window;
        TimeStep time_step;
        GameState* current_state;

        void tick();
        void render();

    };

}

#endif