# Input
The input handler is created within the game constructor, so you don't have to worry about creating it or managing it yourself. It contains a collection of methods for querying key and mouse button states as well as forcing key and mouse button states.

## Key States
There are three different key states: 
* `PRESSED` which indicates a key is pressed down.
* `RELEASED` which indicates a key has been released (useful for 'click' functionality)
* `IDLE` which indicates a key is not being pressed or released. A key that has been released will change to the `IDLE` state after one tick.

## Methods
| Method | Functionality |
| ---- | ---- |
| `setKey(unsigned char index, bool pressed)` | Force a keystate on a key, recommend using an SFML key as index |
| `bool keyPressed(unsigned char index)` | Get the state of a key, recommend using an SFML key as index |
| `int mousePressed(unsigned char index)` | Get the state of a mouse button, recommend using SFML as index |
| `bool mouseHover(sf::RenderWindow* window, float x, float y, float width, float height)` | Check if mouse is hovering over a rectangle |
| `bool mouseHover(sf::RenderWindow* window, float x, float y, float radius)` | Check if mouse is hovering over a circle |