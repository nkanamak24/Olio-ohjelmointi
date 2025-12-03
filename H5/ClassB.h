#ifndef CLASSB_H
#define CLASSB_H
#include <string>
#include <iostream>

using namespace std;

class ClassB
{
    string info;

public:
    ClassB();
    void setInfo(const string newInfo);
    string getInfo();
};

#endif // CLASSB_H
