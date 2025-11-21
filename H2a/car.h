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
    void  setBrand(const std::string& a);
    void  setModel(const std::string& b);
    void setYearModel(int c);
    void printData()const;
};

#endif // CAR_H
