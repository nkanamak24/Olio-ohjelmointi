#ifndef ANIMAL_H
#define ANIMAL_H
#include <windows.h>


class Animal {
public:
    Animal() = default;
    virtual ~Animal() = default;
    virtual void callOut() const;
};


#endif // ANIMAL_H
