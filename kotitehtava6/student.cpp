#include "student.h"

Student::Student(string n, int a)
{
    name = n; //nimi = merkkejä
    age = a; //numbero
}

void Student::setName(const string &newName) //tallentaa uuden nimen
{
    name = newName;
}

string Student::getName() const //ottaa nimen
{
    return name;
}

void Student::setAge(int newAge) //tallentaa uuden iän
{
    age = newAge;
}

int Student::getAge() const //ottaa iän
{
    return age;
}


void Student::printStudentInfo() //printataan ikä ja nimi
{
    cout << getName() << ", ";
    cout <<getAge() << endl;
}
