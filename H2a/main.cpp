#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{

    // Auton luonti
    Car firstCar;
    firstCar.setBrand("Toyota");
    firstCar.setModel("Corolla");
    firstCar.setYearModel(2000);
    firstCar.printData();


    // Suorakulmion luonti

    Rectangle* firstRectangle = new Rectangle();
    firstRectangle->setHeight(3.0);
    firstRectangle->setWidth(5.0);

    cout << "Pinta-ala: " << firstRectangle->getArea() << endl;
    cout << "Ymparysmitta: "<< firstRectangle->getCircum() << endl;

    delete firstRectangle;
    firstRectangle = nullptr;

    // Studentin luonti

    unique_ptr<Student> firstStudent = make_unique<Student>();

    firstStudent->setName("Jussi");
    firstStudent->setStudentNumber(10230);
    firstStudent->setAverage(20.3);

    cout << "Opiskelijan nimi: " << firstStudent->getName() << endl;
    cout << "Opiskelijan opiskelijanumero: " << firstStudent->getStudentNumber() << endl;
    cout << "Opiskelijan keskiarvo: " << firstStudent->getAverage() << endl;



    return 0;
}
