#include "Entity.hpp"

cgfw::Entity::Entity(Game game) {
    multiplier = game.getTimeStep().getMultiplier();
    shape = nullptr;
    vertices = nullptr;
}

void cgfw::Entity::move(float vx, float vy) {
    x += vx * multiplier;
    y += vy * multiplier;
    if(shape != nullptr) shape->move(sf::Vector2f(vx, vy));
}

void cgfw::Entity::bindShape(sf::Shape* m_shape) {
    shape = m_shape;
}

// TODO: Fill method
void cgfw::Entity::bindVertexArray(sf::VertexArray array, float width, int index) {

}

cgfw::Entity::~Entity() {}