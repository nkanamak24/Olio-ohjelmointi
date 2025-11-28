#include "rectangle.h"

rectangle::rectangle() {
    width = 0;
    height = 0;
}

void rectangle::setWidth(double f) {
    width = f;
}

void rectangle::setHeight(double g) {
    height = g;
}

double rectangle::getArea() {
    return width * height;
}

double rectangle::getCircum() {
    return 2 * (width + height);
}
