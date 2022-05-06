#ifndef TIMESTEP_H
#define TIMESTEP_H

#include <SFML/Graphics.hpp>

namespace cgfw {

class TimeStep {

    public:
        TimeStep(sf::RenderWindow* window);
        ~TimeStep();

        void tick();
        void setFPS(float frames_per_second);
        void setSpeed(float game_speed);
        float getMultiplier();

    private:

        sf::RenderWindow* win;
        float fps, speed, dt;
        sf::Clock clock;

    };

}

#endif