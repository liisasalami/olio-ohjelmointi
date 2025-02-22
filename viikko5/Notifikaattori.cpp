#include "Notifikaattori.h"

//kohta 7 tässä välissä
Notifikaattori::Notifikaattori()
{
    cout << "notifikaattorin konstruktori" << endl;
}

void Notifikaattori::lisaa(Seuraaja *seur)
{
/* Lisäys tehdään ”kiilaamalla” listan alkuun niin, että alku/head osoittaa
 * lisättävään olioon ja lisättävän olion next kiilattuun vanhaan alkuun.
 *  Esimekki: Alku osoittaa B:hen, lisätään A niin, että A->next osoittaa B:hen ja alku taas A:han. */

    cout << "Lisataan seuraaja " << seur->getNimi() << endl;

    seur->next = seuraajat;
    seuraajat = seur;

}

void Notifikaattori::poista(Seuraaja *poist)
{
    /* Listalta poisto tehdään ”ohittamalla” olio, eli sen edeltäjä next
     * muokataan osoittamaan sitä seuraavaan olioon.
     * Esimerkki: ohitetaan olio B muokkaamalla A->next osoittamaan C:hen. */

    cout << "Poistetaan seuraaja " << poist->getNimi() << endl;

    if (poist == seuraajat) { //jos seuraajat on listan ensimmäinen niin hypätään sen yli
        seuraajat = seuraajat->next;
    } else {
        Seuraaja *alku = seuraajat;
        while(alku != nullptr) {
            if (alku->next == poist) {
                alku->next = poist->next;
            }
            alku = alku->next;
        }
    }
}

void Notifikaattori::tulosta()
{
/*Funktion tulosta() ideana on tulostaa seuraajien nimi, eli kutsua silmukassa jokaiselle
 * seuraajalle getNimi()-jäsenfunktiota ja tulostaa se konsolille. */

    cout << "Tulostetaan seuraajat" << endl;

    Seuraaja *alku = seuraajat;
    while(alku != nullptr) {
        cout << "Listassa nyt=" << alku->getNimi() << endl;
        alku = alku->next;
        if (alku != nullptr) {
            cout << "listassa seuraava " << alku->getNimi() << endl;
        } else {
            cout << "Lista loppui ";
        }
    }

}

void Notifikaattori::postita(string viesti)
{
    // Lopuksi, funktio postita() toimii siten, että silmukassa kutsutaan jokaisen seuraajan paivitys()-funktiota,
    //jonka parametrinä on sama viesti kuin notifikaattorin postita()-funktiossa. Funktio paivitys()
    //sitten tulostaa viestin ruudulle. Esimerkki tulostuksesta seuraavalla sivulla.

    // A henkilö postittaa ja se menee kaikille sen seuraajille.

    Seuraaja *alku = seuraajat;

    // Käydään läpi kaikki seuraajat
    while (alku != nullptr) {
        alku->paivitys(viesti); // Kutsutaan seuraajan paivitys-funktiota
        alku = alku->next; // Siirrytään seuraavaan seuraajaan
    }
    cout << endl; // Tyhjää riviä tulostukseen
}
