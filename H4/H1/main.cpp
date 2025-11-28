#include <iostream>
#include "funktiot.h"

using namespace std;

int main()
{
    int a, b;
    int c, d;
    float result;

    cout << "calcSum ja calcDiv\nAnna eka luku: ";
    cin >> a;

    cout << "Anna toinen luku: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    cout << "\nretSum ja retDiv\nAnna eka luku: ";
    cin >> c;

    cout << "Anna toinen luku: ";
    cin >> d;

    cout << "retSum palautti: \n" << retSum(c, d) << endl;


    try {
        float result = retDiv(c, d);
        cout << "retDiv palautti: \n" << result << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }


    return 0;
}
