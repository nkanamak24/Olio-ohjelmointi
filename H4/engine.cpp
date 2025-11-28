#include "engine.h"

Engine::Engine()
{
    horsepower = 0;
    displacement = 0.0;
}

int Engine::getHorsepower()
{
    return horsepower;
}

void Engine::setHorsepower(int hp)
{
    horsepower = hp;
}

double Engine::getDisplacement()
{
    return displacement;
}

void Engine::setDisplacement(double disp)
{
    displacement = disp;
}
