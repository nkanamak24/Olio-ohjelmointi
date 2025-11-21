#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>

using namespace std;
class Car
{
private:
    string brand;
    string model;
    int yearModel;

public:
    Car();
    Car(const string &b, const string &m, int yM);
    void printData();
    string getBrand() const;
    void setBrand(const string &newBrand);
    string getModel() const;
    void setModel(const string &newModel);
    int getYearModel() const;
    void setYearModel(int newYearModel);
};

#endif // CAR_H
