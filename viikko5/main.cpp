#include <iostream>
#include "Seuraaja.h"
#include "Notifikaattori.h"

using namespace std;

int main()
{
//#unique_ptr<Seuraaja> *A(new Seuraaja("Aapeli "));
    Seuraaja *A = new Seuraaja("Anna ");
    Seuraaja *B = new Seuraaja("Bekka ");
    Seuraaja *C = new Seuraaja("Celine ");

    Notifikaattori *N = new Notifikaattori();
    cout << endl;

   N->lisaa(A);
    N->lisaa(B);
   N->lisaa(C);
    N->tulosta();

   N->poista(B); //poista toimii kaikille
   // N->lisaa(C);
   N->tulosta();
   N->postita("Tama on viesti 1");

    /* A->next = B;
    B->next = C;

    Seuraaja *alku = A;
        while(alku != nullptr) {
        cout << "Listassa nyt=" << alku->getNimi() << endl;
        alku->paivitys("Kaikki ok");
        alku = alku->next;
        if (alku != nullptr) {
            cout << "listassa seuraava " << alku->getNimi() << endl;
        } else {
            cout << "Lista loppui";
        }}
        cout << endl;

        while (o != nullptr)
        o->jasenfunktio() */

    delete A;
    delete B;
    delete C;

    return 0;
}
