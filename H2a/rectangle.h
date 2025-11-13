#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <string>
using namespace std;

class rectangle
{
private:
    double width;
    double height;
public:
    rectangle();
    double getArea();
    double getCircum();
    void setWidth(double);
    void setHeight(double);
};

#endif // RECTANGLE_H
