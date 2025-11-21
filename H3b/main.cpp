#include <iostream>
#include "animal.h"
#include "dog.h"

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif

    Animal lemmikki;
    lemmikki.callOut();

    Dog koira;
    koira.callOut();

    return 0;
}


