#include "pankkitili.h"

Pankkitili::Pankkitili(string omistaja)
{
    cout << "Omistaja on: "
         << omistaja
         << endl;
}

double Pankkitili::getBalance()
{
    cout << "Rahaa on: "
         << saldo
         << endl;

    return saldo;
}

bool Pankkitili::deposit(double maara) //talletus
{
    if (maara > 0) { // jos määrä on suurempi kuin 0
        saldo += maara; //lisää saldoon annettu määrä
            return true;
    } else {
        cout << "Käyttötilin talletus epäonnistui" << endl;
        return false;
    }
}

bool Pankkitili::withdraw(double maara) {
    if (maara < 0 || maara > saldo) {
        cout << "Käyttötilin nosto ei onnistu: " << endl;
        return false;
    }
    saldo -= maara;  // jos ylemmät menee läpi miinustaa saldosta määrän
    return true;
}
