#include <iostream>
#include <string>
#include "car.h"
#include "engine.h"
#include "wheel.h"

using namespace std;



int main()
{
    Car myCar;

    myCar.setBrand("Toyota");
    myCar.setModel("Corolla");
    myCar.setEngine();
    myCar.setWheels();
    myCar.printDetails();
}
