#ifndef ASIAKAS_H
#define ASIAKAS_H

#include <iostream>
using namespace std;
#include "luottotili.h"

class Luottotili;
class Pankkitili;

class Asiakas {
public:
    string GetNimi();
    void showSaldo();
    bool talletus(double);
    bool nosto(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);
    Asiakas(string, double);
    bool tiliSiirto(double, Asiakas&);

private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
};

#endif // ASIAKAS_H
