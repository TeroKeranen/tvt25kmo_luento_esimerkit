#include "car.h"

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setEngine()
{
    objEngine.setHorsePower(150);
    objEngine.setDisplacement(2.0);
}

void Car::setWheel()
{
    objWheel1.setSize(17);
    objWheel1.setType("kesarengas");

    objWheel2.setSize(17);
    objWheel2.setType("kesarengas");

    objWheel3.setSize(17);
    objWheel3.setType("kesarengas");

    objWheel4.setSize(17);
    objWheel4.setType("kesarengas");
}

void Car::printDetails()
{
    cout << "Car brand: " << brand << ", model: " << model << endl;
    cout << "Engine horsepower: " << objEngine.getHorsePower()
         << ", displacement: " << objEngine.getDisplacement() << " L" << endl;

    cout << "Wheels:" << endl;
    cout << "  Wheel 1 - size: " << objWheel1.getSize()
         << ", type: " << objWheel1.getType() << endl;
    cout << "  Wheel 2 - size: " << objWheel2.getSize()
         << ", type: " << objWheel2.getType() << endl;
    cout << "  Wheel 3 - size: " << objWheel3.getSize()
         << ", type: " << objWheel3.getType() << endl;
    cout << "  Wheel 4 - size: " << objWheel4.getSize()
         << ", type: " << objWheel4.getType() << endl;
}

Car::Car()
{

}

Car::Car(string b, string m)
{
    brand = b;
    model = m;
}
