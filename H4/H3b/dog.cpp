#include <iostream>
#include <string>
#include "dog.h"

using namespace std;

void Dog::callOut() const {
    cout << "Koira haukkuu." << endl;
}

Dog::~Dog() {
    cout << "Koira tapettu :(" << endl;
    cout << "Animal tapettu :(" << endl;
}
