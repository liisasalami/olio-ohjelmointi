#ifndef CHEF_H
#define CHEF_H

#include <iostream>
using namespace std;

class chef {
public:
    chef();
    chef(string name);
    ~chef(); //(destruktori)

    string getChefName() const;
    int makeSalad(int aines);
    int makeSoup(int aines);


protected:
               string chefName;
    int aines;

};

#endif // CHEF_H
