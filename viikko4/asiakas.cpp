#include "asiakas.h"
#include "pankkitili.h"

string Asiakas::GetNimi()
{
    cout << "anna nimi: ";
    cin >> nimi;
    cout << "Nimesi on: "
         << nimi
         << endl;

    return nimi;
}

void Asiakas::showSaldo()
{
//tulostaa molempien tilien saldot
    cout << "Asiakas on: " << nimi << endl;
    cout << "Kayttotilin saldo on: " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo on: " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double maara)
{
    //käyttötilin talletus (deposit)
    return kayttotili.deposit(maara);
}

bool Asiakas::nosto(double maara)
{
// eli käyttötilin withdraw
    return kayttotili.withdraw(maara);
}

bool Asiakas::luotonMaksu(double maara)
{
//eli luottotilin deposit (tilillä ei voi olla rahaa)
    return luottotili.deposit(maara);
}

bool Asiakas::luotonNosto(double maara)
{
// eli luottotilin withdraw
    return luottotili.withdraw(maara);
}

Asiakas::Asiakas(string nimi, double luottoraja) // toinen parametreistä luottoraja
    : nimi(nimi), kayttotili(nimi), luottotili(nimi, luottoraja) //vain luottotilillä on luottoraja
{

}

bool Asiakas::tiliSiirto(double maara, Asiakas& kohde)
{
    if (kayttotili.withdraw(maara) && kohde.kayttotili.deposit(maara)) { // jos withdrawal onnistuu => nostetaan saman verran rahaa toisella tilillä
        cout << "Siirrettiin tililta: " << maara << nimi <<  "Tilille: " << kohde.nimi << endl; //Siirrettiin (kenen tililtä) => tilille x
        return true;
    }
    cout << "Siirto epäonnistui" << maara << nimi << endl; //jos epäonnistuu
    return false;
}
