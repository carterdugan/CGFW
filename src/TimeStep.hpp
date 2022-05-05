#ifndef TIMESTEP_H
#define TIMESTEP_H

#include <SFML/Graphics.hpp>

namespace cgfw {

class TimeStep {

    public:
        TimeStep(sf::RenderWindow* window, float frames_per_second, float game_speed);
        ~TimeStep();

        void tick();
        float getMultiplier();

    private:

        float fps, speed, dt;
        sf::Clock clock;

    };

}

#endif