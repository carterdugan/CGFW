#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <SFML/Graphics.hpp>

namespace cgfw {

    typedef enum {

        PRESSED,
        RELEASED,
        IDLE

    } mouse_state;

    class InputHandler {

    public:
        InputHandler();
        ~InputHandler();

        void setKey(unsigned char index, bool pressed);

        bool keyPressed(unsigned char index);

        int mousePressed(unsigned char index);

        void tick(sf::RenderWindow* window);

        bool mouseHover(sf::RenderWindow* window, float x, float y, float width, float height);
        bool mouseHover(sf::RenderWindow* window, float x, float y, float radius);

    private:

        bool* keys;
        int* mstates;

        bool clicked;

    };

}

#endif