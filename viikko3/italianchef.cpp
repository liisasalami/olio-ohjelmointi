#include "italianchef.h"
#include "chef.h"

ItalianChef::ItalianChef()
{
    cout << "ItalianChef default"
         << endl;
}

ItalianChef::ItalianChef(string name)
    :chef(name)
{
    cout << "ItalianChef konstruktori"
         << "Luigi on kokin nimi"
         << name
         << endl;
}

bool ItalianChef::AskSecret(string pwInput, int f, int w) {

    flour = f;
    water = w;
    //onko salasana oikein, ja jos on ainekset myös ok tekee pitsalin

    if (pwInput == password) {
        makePizza();
        return true; // :)
    } else {
        cout << "Annoit väärän salasanan";
        return false; // :(
    }
}

int ItalianChef::makePizza()
{
    int Pizza = 0;
    if (flour >= 5 && water >= 5) {
        Pizza = flour / 5;

        cout << "pizza on valmis "
             << Pizza
             << endl;
        return Pizza;
    }
    else {
        cout << "Ei pizzaa. :(" << endl;
        return 0;
    }
}

ItalianChef::~ItalianChef() {
    cout << "ItalianChef destruktori"
         << endl;
}



