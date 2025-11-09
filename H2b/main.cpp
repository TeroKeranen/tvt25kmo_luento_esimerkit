#include "car.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<Car> carlist;

    carlist.emplace_back("Toyota", "Corolla", 1993);
    carlist.emplace_back("Nissan", "Skyline", 2003);
    carlist.emplace_back("BMW", "X2", 2011);

    for (auto &car : carlist) {
        car.printData();
        cout << endl;
    }




    return 0;
}
