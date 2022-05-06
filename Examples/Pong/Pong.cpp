#include "Pong.hpp"


Pong::Pong() {

	// Contructor takes an instance of a GameState subclass
	cgfw::Game pong(this);


	// SFML used for the players and ball
	player1.setSize(sf::Vector2f(20,80));
	player2.setSize(sf::Vector2f(20,80));
	ball.setRadius(10);
	ball.setOrigin(sf::Vector2f(10,10));
	ball.setPosition(sf::Vector2f(250,250));

	player1.setPosition(sf::Vector2f(10, 210));
	player2.setPosition(sf::Vector2f(470, 210));

	ball_velocity_x = 5;
	ball_velocity_y = 2;

	// Run the game to start the loop
	pong.run();
}

void Pong::tick(cgfw::Game* game) {

	// Time step multiplier for consistent entity movement speed
	float mult = game->getTimeStep().getMultiplier();

	// Check the input handler for pressed keys
	if(game->getInputHandler().keyPressed(sf::Keyboard::W))
		// Multiply moving entities by the time step multiplier for consistent speed
		player1.move(sf::Vector2f(0, -5 * mult));

	if(game->getInputHandler().keyPressed(sf::Keyboard::S))
		player1.move(sf::Vector2f(0, 5 * mult));

	if(game->getInputHandler().keyPressed(sf::Keyboard::Up))
		player2.move(sf::Vector2f(0, -5 * mult));
	
	if(game->getInputHandler().keyPressed(sf::Keyboard::Down))
		player2.move(sf::Vector2f(0, 5 * mult));

	if(ball.getPosition().y + ball.getRadius() >= 500 || ball.getPosition().y <= 0)
		ball_velocity_y *= -1;
	if(ball.getPosition().x + ball.getRadius() >= 500 || ball.getPosition().x <= 0)
		ball_velocity_x *= -1;

	ball.move(sf::Vector2f(ball_velocity_x * mult, ball_velocity_y * mult));

}

void Pong::render(sf::RenderWindow* window) {

	window->draw(player1);
	window->draw(player2);
	window->draw(ball);

}

int main() {
	Pong pong;
}