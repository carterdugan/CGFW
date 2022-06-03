#ifndef ENTITY_H
#define ENTITY_H

#include "Game.hpp"

namespace cgfw {

class Entity {

public:
    Entity(Game game);
    ~Entity();
private:
    float multiplier;
    sf::Shape* shape;
    sf::Vertex* vertices;
protected:
    float x, y;
    void move(float vx, float vy);
    void bindShape(sf::Shape* shape);
    void bindVertexArray(sf::VertexArray array, float width, int index);
};

};

#endif