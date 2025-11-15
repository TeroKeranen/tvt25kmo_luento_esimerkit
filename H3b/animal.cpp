#include "animal.h"
#include <iostream>
using namespace std;

Animal::Animal()
{

}

Animal::~Animal()
{
    cout << "Animal tuhoutuu" << endl;
}

void Animal::callOut()
{
    cout << "Eläin ääntelee." << endl;
}
