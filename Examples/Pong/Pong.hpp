#ifndef PONG_HEADER
#define PONG_HEADER

// Include the CGFW header which includes all of the necessary headers
#include "CGFW.hpp"

/*
State classes, from entire games to option menus, must extend the game
state class that contains two virtual functions tick() and draw().
*/
class Pong : public cgfw::GameState {

public:
	Pong();

	// Logic that is calculated here
	virtual void tick(cgfw::Game* game);

	// Any rendering is done here.
	virtual void render(sf::RenderWindow* window);

private:
	sf::RectangleShape player1;
	sf::RectangleShape player2;
	sf::CircleShape ball;

	float ball_velocity_x;
	float ball_velocity_y;

};

#endif