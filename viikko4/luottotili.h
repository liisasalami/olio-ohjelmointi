#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include <iostream>
using namespace std;
#include "pankkitili.h"

class Pankkitili;

class Luottotili : public Pankkitili {
public:
    Luottotili(string, double);
    bool deposit(double maara) override;
    bool withdraw(double) override;

protected:
    double luottoraja = 0;
};

#endif // LUOTTOTILI_H
