#include <iostream>
using namespace std;
#include "asiakas.h"

int main() {
    //OSA1
    Asiakas asiakas1("Marko Markolainen ", 5000); //käyttötili ok
    Asiakas asiakas2("Marjo Marjolainen ", 2000);
    /*asiakas.showSaldo(); // 0
    asiakas.talletus(500);
    asiakas.showSaldo(); //toimii
    asiakas.nosto(250);
    asiakas.showSaldo();
    asiakas.nosto(300); */

    /*asiakas.showSaldo(); //luottoraja ok, luottotili toimii odotetusti pienellä testauksella
    asiakas.luotonNosto(2000);
    asiakas.showSaldo();
    asiakas.luotonMaksu(2000); */

    //OSA2


    asiakas1.showSaldo();
    asiakas2.showSaldo();
    asiakas1.talletus(2000);
    asiakas1.showSaldo();
    asiakas2.showSaldo();
    asiakas1.tiliSiirto(500, asiakas2);
    asiakas1.showSaldo();
    asiakas2.showSaldo();


    return 0;
}
