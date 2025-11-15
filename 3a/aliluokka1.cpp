#include "aliluokka1.h"
#include <iostream>

using namespace std;
Aliluokka1::Aliluokka1()
{

}

void Aliluokka1::asetaNumerot(int pub, int pro, int priv)
{
    publicNumber = pub;
    protectedNumber = pro;
    // PrivateNumber ei pääse käsiksi
    setPrivateNumber(priv);
}

void Aliluokka1::tulostaNumerot()
{
    cout << "publicnumbero: " <<publicNumber << endl;
    cout << "protected numero: " << protectedNumber << endl;
    cout << "Privaattinumero : " << getPrivateNumber() << endl;

}
