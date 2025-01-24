#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public chef
{
public:
    ItalianChef();
    ~ItalianChef();
    ItalianChef (string name);

    bool AskSecret(string pwInput, int flour, int water);

private:
    string ItalianChefname;
    string password = "pizza";
    int makePizza();
    int flour;
    int water;
};

#endif // ITALIANCHEF_H
