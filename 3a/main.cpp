
#include "chef.h"
#include "italianchef.h"


#include <iostream>

using namespace std;

int main()
{
    Chef chef("Cordon ramsay");
    chef.makeSalad();
    chef.makeSoup();

    cout << "\n--- ItalianChef ---" << endl;
    italianChef italian("Anthony Bourdain");

    italian.makeSalad();
    italian.makeSoup();
    italian.makePasta();

    cout << "Chef name: " << italian.getName() << endl;
    return 0;
}
