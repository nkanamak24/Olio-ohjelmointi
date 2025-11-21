#ifndef DOG_H
#define DOG_H
#include <windows.h>
#include "animal.h"


class Dog : public Animal {
public:
    Dog() = default;
    ~Dog() override;
    void callOut() const override;
};


#endif // DOG_H
