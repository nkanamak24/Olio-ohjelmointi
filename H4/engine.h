#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>

using namespace std;

class Engine
{
private:
    int horsepower;
    double displacement;

public:
    Engine();
    Engine(int, double);
    int getHorsepower();
    void setHorsepower(int hp);
    double getDisplacement();
    void setDisplacement(double disp);
};

#endif // ENGINE_H
