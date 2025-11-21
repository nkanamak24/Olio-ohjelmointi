#include "car.h"
#include <iostream>

Car::Car() {}

void Car::setBrand(const string& a)
{
    brand = a;
}

void Car::setModel(const string& b)
{
    model = b;
}

void Car::setYearModel(int c)
{
    yearModel = c;
}

void Car::printData() const
{
    cout<<"Merkki: "<<brand<<endl;
    cout<<"Malli: "<<model<<endl;
    cout<<"Vuosimalli: "<<yearModel<<endl;
}
