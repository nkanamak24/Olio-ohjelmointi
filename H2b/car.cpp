#include "car.h"
#include <iostream>
#include <vector>
using namespace std;

string Car::getBrand() const {
    return brand;
}

void Car::setBrand(const string &newBrand) {
    brand = newBrand;
}

string Car::getModel() const {
    return model;
}

void Car::setModel(const string &newModel) {
    model = newModel;
}

int Car::getYearModel() const {
    return yearModel;
}

void Car::setYearModel(int newYearModel) {
    yearModel = newYearModel;
}

void Car::printData() {
    cout << "Automerkki: " << brand
         << " Malli: " << model
         << " Vuosimalli: " << yearModel << endl;
}

Car::Car(const string &b, const string &m, int yM)
    : brand(b), model(m), yearModel(yM) {}

Car::Car() : brand(""), model(""), yearModel(0) {}
