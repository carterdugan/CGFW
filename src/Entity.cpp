#include "Entity.hpp"

cgfw::Entity::Entity(Game game) {
    multiplier = game.getTimeStep().getMultiplier();
    shape = nullptr;
    vertices = nullptr;
}

void cgfw::Entity::move(float vx, float vy) {
    x += vx;
    y += vy;
    if(shape != nullptr) shape->move(sf::Vector2f(vx, vy));
}

void cgfw::Entity::bindShape(sf::Shape* m_shape) {
    shape = m_shape;
}
void cgfw::Entity::bindVertexArray(sf::VertexArray array, float width, int index) {

}

cgfw::Entity::~Entity() {}