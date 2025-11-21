#include "chef.h"
#include <iostream>

using namespace std;

chef::chef(const std::string &n) : name(n) {
    cout << "Chef " << name << " konstruktori." << endl;
}

chef::~chef() {
    cout << "Chef " << name << " destruktori." << endl;
}

void chef::makeSalad() {
    cout << "Chef " << name << " makes salad." << endl;
}

void chef::makeSoup() {
    cout << "Chef " << name << " makes soup." << endl;
}


italianChef::italianChef(const string &n) : chef(n) {
    cout << "ItalianChef " << name << " konstruktori." << endl;
}


string italianChef::getName()
{
    return name;
}

italianChef::~italianChef() {
    cout << "ItalianChef " << name << " destruktori." << endl;
}


void italianChef::makePasta() {
    cout << "ItalianChef " << name << " makes pasta." << endl;
}
