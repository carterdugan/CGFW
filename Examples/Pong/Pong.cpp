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

	pong.run();
}

void Pong::tick(cgfw::Game* game) {

}

void Pong::render(sf::RenderWindow* window) {

	window->draw(player1);
	window->draw(player2);
	window->draw(ball);

}

int main() {
	Pong pong;
}