#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class italianChef : public Chef
{
public:
    italianChef(string n);
    ~italianChef();
    void makePasta();
    string getName();
};

#endif // ITALIANCHEF_H
