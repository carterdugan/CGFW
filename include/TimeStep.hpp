/*
Author:         Carter Dugan
Date Created:   5/8/22

Timestep handles timestep which makes game speed consistent and
helps reduce hardware load.

*/


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

        /*
        Moving entities should have their displacement multiplied
        by the timestep multiplier which is returned by this
        method.
        */
        float getMultiplier();

    private:

        sf::RenderWindow* win;
        float fps, speed, dt;
        sf::Clock clock;

    };

}

#endif