#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"
#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
    Engine engine;
    Wheel wheel1;
    Wheel wheel2;
    Wheel wheel3;
    Wheel wheel4;
    string model;
    string brand;

public:
    Car();
    Car(string, string);
    void setEngine();
    void setWheels();
    string getModel();
    void setModel(const string& newmodel);
    string getBrand();
    void setBrand(const string& newbrand);
    void printDetails();
};

#endif // CAR_H
