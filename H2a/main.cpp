#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>
#include <iostream>

using namespace std;

int main() {
    Car myCar;

    myCar.setBrand("Toyota");
    myCar.setModel("Corolla");
    myCar.setYearModel(1994);
    myCar.printData();

    cout << " " << endl;

    double width = 1.50;
    double height = 2.50;

    rectangle* newRectangle = new rectangle();

    newRectangle->setWidth(width);
    newRectangle->setHeight(height);

    cout << "Suorakulmion pinta-ala on: " << newRectangle->getArea() << endl;
    cout << "Suorakulmion ymparysmitta on: " << newRectangle->getCircum() << endl;

    delete newRectangle;
    newRectangle=nullptr;

    cout << " " << endl;

    std::shared_ptr<Student> student = std::make_shared<Student>();

    student->setName(" Matti Meikalainen ");
    student->setStudentNumber( 5 );
    student->setAverage( 4.50 );

    cout << " Opiskelijan nimi: " << student->getName() << endl;
    cout << " Opiskelijanumero: " << student->getStudentNumber() << endl;
    cout << " Keskiarvo: " << student->getAverage() << endl;

    return 0;
}
