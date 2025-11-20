#include "car.h"

#include <iostream>

using namespace std;

int main()
{
    Car myCar("Toyota", "Corolla");
    myCar.setEngine();
    myCar.setWheel();

    myCar.printDetails();
    return 0;
}
