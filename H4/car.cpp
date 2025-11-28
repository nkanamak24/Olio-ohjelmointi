#include "car.h"
#include "engine.h"
#include "wheel.h"
#include <iostream>

using namespace std;

Car::Car() {}

void Car::setEngine()
{
    engine.setHorsepower(150);
    engine.setDisplacement(2.0);
}

void Car::setWheels()
{
    wheel1.setSize(17);
    wheel1.setType("kesarengas");

    wheel2.setSize(17);
    wheel2.setType("kesarengas");

    wheel3.setSize(17);
    wheel3.setType("kesarengas");

    wheel4.setSize(17);
    wheel4.setType("kesarengas");
}

void Car::setModel(const string& newModel)
{
    this->model = newModel;
}

void Car::setBrand(const string& newBrand)
{
    this->brand = newBrand;
}

void Car::printDetails()
{
cout << "Auto: " << brand << " " << model << endl;
cout << "Moottori: " << engine.getHorsepower() << " HP, " << engine.getDisplacement() << " L" << endl;

cout << "Rengas 1: " << wheel1.getSize() << " tuumaa, " << wheel1.getType() << endl;
cout << "Rengas 2: " << wheel2.getSize() << " tuumaa, " << wheel2.getType() << endl;
cout << "Rengas 3: " << wheel3.getSize() << " tuumaa, " << wheel3.getType() << endl;
cout << "Rengas 4: " << wheel4.getSize() << " tuumaa, " << wheel4.getType() << endl;
}


