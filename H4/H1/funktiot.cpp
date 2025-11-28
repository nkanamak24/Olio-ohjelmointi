#include "funktiot.h"
#include <iomanip>

void calcSum(int a, int b)
{
    cout << "Summa on \n" << a + b << endl;
}

void calcDiv(int a, int b)
{
    if (b == 0) {
        cout << "\nVIRHE JAKOLASKUSSA! Jakaja ei voi olla 0.\n" << endl;
    } else {
        cout << fixed << setprecision(2);
        cout << "Jakolaskun tulos on \n" << static_cast<double>(a) / b << endl;
    }
}

int retSum(int a, int b)
{
    return a + b;
}

float retDiv(int a, int b)
{

    if (b == 0) {
        throw std::runtime_error("\njakaja ei saa olla nolla.\n");
    }
    return static_cast<float>(a) / b;

}
