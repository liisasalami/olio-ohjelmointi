#include "chef.h"

chef::chef() {
             cout << "chef defkonstruktori"
         << endl;
}

chef::chef(string name) {
    chefName = name;
    int aines;
    cout << "chef konstruktori, kokin nimi "
         << chefName
         << endl;

    /*cout << "Paljonko on aineksia? ";
    cin >> aines;
    cout << "Aineksia on: " << aines << endl;
       cout  << "Paljonko on aineksia?"
        << aines
         << endl;*/ //ei toiminu
}

chef::~chef()
{
 cout << "chef destruktori"
         << endl;
}

string chef::getChefName() const //:: = kuuluu siihen luokkaan)
{
    return chefName;
}
int chef::makeSalad(int aines) {
    int salaannos;

    cout << "Aineksia "
         << aines
         << endl;

    if (aines >= 5)
        salaannos = aines / 5;

    cout << "Salaatti-annoksia "
         << salaannos
         << endl;

    return salaannos;
} // joka viides aines, voi saada salaatin

int chef::makeSoup(int aines) {
    int keittoannos;
    cout << "Aineksia "
         << aines
         << endl;

    if (aines >= 3)
        keittoannos = aines / 3;
    cout << "Keitto-annoksia "
         << keittoannos
         << endl;

    return keittoannos;
} // Keitto = 3 ainesta, palauttaa annosten määrän
