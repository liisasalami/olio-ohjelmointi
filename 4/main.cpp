#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//Prototyyppi
int game (int maxnum);

int main()
{
    int arvausten_lkm = 0;
    int maxnum = 37;

    arvausten_lkm = game(maxnum);
    cout << "Arvauksia: "
         << arvausten_lkm
         << endl;
    return 0;
}
int game (int maxnum) {

    int arvausten_lkm = 0;
    int satunnaisluku = 0;
    int arvaus = 0;


    cout << "Maxnum="
         <<maxnum
         <<endl;

    srand(time(NULL));
    satunnaisluku = rand() & 40;

    while (true) {
        cout << "Anna luku? "
             << endl;
        cin >> arvaus;
        arvausten_lkm++;

        if (arvaus == satunnaisluku) {
            cout << "Oikein!"
                 << endl;
            break;
        }

        if (arvaus < satunnaisluku) {
            cout << "Luku on suurempi"
                 << endl;
        }

        if (arvaus > satunnaisluku) {
            cout << "Luku on pienempi"
                 << endl;
        }
    }
    return arvausten_lkm;
}
