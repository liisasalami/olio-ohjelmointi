#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    //chef c_olio ("Gordon");
   // c_olio.makeSalad(15);
   // c_olio.makeSoup(9);

    string pwInput;
    int water;
    int flour;

    cout << "Syötä hyvin salainen salasana: ";
    cin >> pwInput;
    cout << "Paljonko on vettä: ";
    cin >> water;
    cout << "Paljonko on jauhoa: ";
    cin >> flour;

    ItalianChef i_olio ("Luigi");
    i_olio.AskSecret(pwInput, flour, water);


    return 0;
}
