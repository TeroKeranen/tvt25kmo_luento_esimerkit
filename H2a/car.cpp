#include "car.h"

Car::Car()
{

}

void Car::printData()
{
    cout << "Auton merkki: " <<brand << endl;
    cout << "Auton malli: " << model << endl;
    cout << "Auton vuosimalli: " << yearModel << endl;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}
