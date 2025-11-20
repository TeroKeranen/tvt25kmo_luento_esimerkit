#include "engine.h"

int Engine::getHorsePower() const
{
    return horsePower;
}

void Engine::setHorsePower(int newHorsePower)
{
    horsePower = newHorsePower;
}

double Engine::getDisplacement() const
{
    return displacement;
}

void Engine::setDisplacement(double newDisplacement)
{
    displacement = newDisplacement;
}

Engine::Engine()
{
    horsePower = 0;
    displacement = 0.0;

}

Engine::Engine(int h, double d)
{
    horsePower = h;
    displacement = d;
}
