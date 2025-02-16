#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student {
public:
    Student (string, int);

    void setAge(int newAge);
    int getAge() const;

    void setName(const string &newName);
    string getName () const;

    void printStudentInfo();

private:
    string name;
    int age;

};

#endif // STUDENT_H
