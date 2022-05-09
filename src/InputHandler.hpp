/*
Author:         Carter Dugan
Date Created:   5/8/22

The input handler simplifies the processing of inputs by allowing
the user to directly poll for pressed keys and mouse states. This
abstracts away the SFML polling loop.

*/

#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <SFML/Graphics.hpp>

namespace cgfw {

/*
There are three mouse states that can be triggered and assigned
to the corresponding buttons. PRESSED is when the mouse is
being pressed down. RELEASED is temporarily assigned with the
mouse has been released (effectively allowing for a "clicked"
event), and IDLE is for when the mouse is neither pressed nor
released.
*/
typedef enum {

    PRESSED,
    RELEASED,
    IDLE

} mouse_state;


class InputHandler {

public:
    InputHandler();
    ~InputHandler();


    /*
    setKey() is intended to be used for forced keyboard input.
    The index is the key to be pressed (or not). It is best
    to pass a key to this method using SFML's keyboard class.

    EXAMPLE:
    setKey(sf::Keyboard::W, true);
    */
    void setKey(unsigned char index, bool pressed);


    /*
    keyPressed() asks for the state of the desired key. Much like
    setKey(), it is best to pass the SFML keyboard class member
    for the desired key rather than other methods.

    EXAMPLE:
    keyPressed(sf::Keyboard::W);
    */
    bool keyPressed(unsigned char index);


    /*
    Same as setKey(), but for mouse buttons.

    EXAMPLE:
    mousePressed(sf::Mouse::Left);
    */
    int mousePressed(unsigned char index);


    // TODO: Uncomment and implement mouseClicked() method
    // bool mouseClicked(unsigned char index);


    /*
    mouseHover() is intended to be used as a means of checking
    for mouse collisions. There are multiple implementations
    for different shapes, including rectangles and circles.
    */
    bool mouseHover(sf::RenderWindow* window, float x, float y, float width, float height);
    bool mouseHover(sf::RenderWindow* window, float x, float y, float radius);

    void tick(sf::RenderWindow* window);

private:

    bool* keys;
    int* mstates;

    bool clicked;

};

}

#endif