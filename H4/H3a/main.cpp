#include <iostream>
#include "chef.h"

using namespace std;


int main()
{
    chef kokki("Jyrki Sukula");
    italianChef italianKokki("Sikke Sumari");

    kokki.makeSalad();
    kokki.makeSoup();
    italianKokki.makePasta();
    cout << "name of  Italian Chef is " << italianKokki.getName() << "." << endl;

    return 0;

}
