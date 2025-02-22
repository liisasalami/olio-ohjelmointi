#include "luottotili.h"
#include "pankkitili.h"
#include <iostream>


Luottotili::Luottotili(string Omistaja, double Luottoraja)
    : Pankkitili(Omistaja)
{
    luottoraja = Luottoraja * -1;
    omistaja = Omistaja;
    saldo = 0;
    cout << "luottotilin konstruktori" << endl;
}
/*bool Luottotili::deposit(double maara)
{
    if (saldo + maara >= 0) { //jos saldo + määrä on enemmän kuin 0
        cout << "Luottotilin maksu ei onnistu" << endl;
        return false;
    } else {
        saldo = saldo + maara;
        cout << "Tallennus on: " << saldo << endl;
        cout << "Luottoa on maksettu: " << maara << endl;
        return true;
    }} */

bool Luottotili::deposit(double maara) {
    if (maara <= 0) { // ei saa olla 0 tai negatiivinen
        cout << "Virheellinen talletussumma" << endl;
        return false;
    } if  (saldo + maara > 0) {
        cout << "Virheellinen talletussumma. Ylitit rajan" << endl;
        return false;
    }
        saldo = saldo + maara;
        cout << "Talletus onnistui. Uusi saldo: " << saldo << endl;
        return true;
    }

bool Luottotili::withdraw(double maara) {
    // jos nosto menee yli luottorajan
    if (saldo - maara < luottoraja) {
        cout << "Luottotilin nosto ei onnistu: ylitetty luottoraja" << endl;
        return false;
    } else {
        saldo = saldo - maara; //Päivitä saldo
        cout << "Nosto onnistui. Uusi saldo: " << saldo << endl;
        return true;
    }
}
