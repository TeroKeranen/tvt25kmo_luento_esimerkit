#include "italianchef.h"

italianChef::italianChef(string n) : Chef(n)
{
    cout << "ItalianChef constructor: " << name << endl;
}

italianChef::~italianChef()
{
   cout << "ItalianChef destructor: " << name << endl;
}

void italianChef::makePasta()
{
 cout << name << " makes pasta" << endl;
}

string italianChef::getName()
{
 return name;
}
