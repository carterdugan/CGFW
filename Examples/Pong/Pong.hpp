#ifndef PONG_HEADER
#define PONG_HEADER

#include "CGFW.hpp"

class Pong : public cgfw::GameState {

public:
	Pong();

	virtual void tick(cgfw::Game* game);
	virtual void render(sf::RenderWindow* window);

private:
	sf::RectangleShape player1;
	sf::RectangleShape player2;
	sf::CircleShape ball;

};

#endif