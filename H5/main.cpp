#include <iostream>
#include "ClassB.h"
#include "ClassA1.h"
#include "ClassA2.h"

using namespace std;

int main()
{
    int a = 5;

    cout << "a:n arvo on: " << a << " ja osoite on:" << &a << endl;

    cout << "  " << endl;

    int* pointerA = &a;

    cout << "Pointterin osoittam osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    cout << "  " << endl;

    int& refA = a;

    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA osoittaman muistipaikan arvo on: " << refA << endl;

    cout << "  " << endl;

    int b = 6;

    /* int& refA = b;

    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
     Tämä ei onnistu. referenssi ei voi vaihtaa kohdettaan. */

    pointerA = &b;

    cout << "Pointterin osoittama osoite on: " << pointerA << " (b)" << endl;

    cout << "  " << endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA1: "<<objA1.getBinfo()<<endl;

    cout << "  " << endl;

    ClassB &refB=objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA2 "<<objA2.getBinfo()<<endl;
    cout<<endl;
}
