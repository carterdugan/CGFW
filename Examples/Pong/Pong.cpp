#include "Pong.hpp"

Pong::Pong() {
	cgfw::Game pong(this);

	player1.setSize(sf::Vector2f(20,80));
	player2.setSize(sf::Vector2f(20,80));
	ball.setRadius(10);
	ball.setOrigin(sf::Vector2f(10,10));
	ball.setPosition(sf::Vector2f(250,250));

	player1.setPosition(sf::Vector2f(10, 210));
	player2.setPosition(sf::Vector2f(470, 210));

	ball_velocity_x = 5;
	ball_velocity_y = 2;

	pong.run();
}

void Pong::tick(cgfw::Game* game) {

	if(game->getInputHandler().keyPressed(sf::Keyboard::W))
		player1.move(sf::Vector2f(0, -5 * game->getTimeStep().getMultiplier()));

	if(game->getInputHandler().keyPressed(sf::Keyboard::S))
		player1.move(sf::Vector2f(0, 5 * game->getTimeStep().getMultiplier()));

	if(game->getInputHandler().keyPressed(sf::Keyboard::Up))
		player2.move(sf::Vector2f(0, -5 * game->getTimeStep().getMultiplier()));
	
	if(game->getInputHandler().keyPressed(sf::Keyboard::Down))
		player2.move(sf::Vector2f(0, 5 * game->getTimeStep().getMultiplier()));

	if(ball.getPosition().y + ball.getRadius() >= 500 || ball.getPosition().y <= 0)
		ball_velocity_y *= -1;
	if(ball.getPosition().x + ball.getRadius() >= 500 || ball.getPosition().x <= 0)
		ball_velocity_x *= -1;

	ball.move(sf::Vector2f(ball_velocity_x, ball_velocity_y));

}

void Pong::render(sf::RenderWindow* window) {

	window->draw(player1);
	window->draw(player2);
	window->draw(ball);

}

int main() {
	Pong pong;
}