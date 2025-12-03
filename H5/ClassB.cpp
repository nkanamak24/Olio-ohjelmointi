#include "ClassB.h"
#include <string>
#include <iostream>

using namespace std;

void ClassB::setInfo(const string newInfo)
{
    info = newInfo;
}

string ClassB::getInfo()
{
    return info;
}


ClassB::ClassB() {
    info = "";
}
