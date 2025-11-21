#include "car.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    Car objcarList1("Toyota","Corolla",1994);
    Car objcarList2("Ford","Focus",2001);
    Car objcarList3("Dacia","Duster",2022);

    vector<Car> carList;
    carList.push_back(objcarList1);
    carList.push_back(objcarList2);
    carList.push_back(objcarList3);

    cout << "Yhden alkion tulostus: " << endl;
    carList[1].printData();

    cout << " " << endl;

    cout << "Kaikki listan alkiot" << endl;

    for(int x=0; x<=2; x++){
        cout << "-";
        carList[x].printData();
    }
}
