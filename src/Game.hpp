/*
Author:         Carter Dugan
Date Created:   5/8/22

The game itself. Calls all handlers and a game state that is
specified by the user and also contains the central SFML render
render window.

*/


#ifndef GAME_H
#define GAME_H


#include <SFML/Graphics.hpp>
#include <string>

#include "InputHandler.hpp"
#include "TimeStep.hpp"
#include "GameState.hpp"


#ifndef WIN_TITLE
#define WIN_TITLE "CGFW"
#endif

#ifndef WINDOW_WIDTH_DEFAULT
#define WINDOW_WIDTH_DEFAULT 500
#endif

#ifndef WINDOW_HEIGHT_DEFAULT
#define WINDOW_HEIGHT_DEFAULT 500
#endif

#ifndef FPS_DEFAULT
#define FPS_DEFAULT 60
#endif

#ifndef GAME_SPEED_DEFAULT
#define GAME_SPEED_DEFAULT 60
#endif

namespace cgfw {

class Game {

    public:
    Game(GameState* main_state);
    Game(GameState* main_state, float window_width, float window_height, std::string title);
    ~Game();

        void run();

        InputHandler getInputHandler();
        TimeStep getTimeStep();
        GameState* getGameState();
        sf::RenderWindow* getWindow();
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