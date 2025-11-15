#include "chef.h"

Chef::Chef(string n)
{
    name = n;
    cout << "Chef constructor: "<< name << endl;
}

void Chef::makeSalad()
{
    cout << name << " makes salad" << endl;
}

void Chef::makeSoup()
{
    cout << name << " makes soup" << endl;
}
