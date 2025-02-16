#include <vector>
#include <algorithm>
#include <iostream>
#include "student.h"
#include <string>

using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;

    //opiskelijat

    Student a("Aaa", 30);
    Student b("Bee", 24);
    Student c("Cee", 27);
    Student d("Dee", 21);

    studentList.push_back(a);
    studentList.push_back(b);
    studentList.push_back(c);
    studentList.push_back(d);

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
            /* // TÄTÄ EI TARVI TEHÄ

          Kysy käyttäjältä uuden opiskelijan nimi ja ikä
          // Lisää uusi student StudentList vektoriin.
           student *s = new student
            studentlist->lisää(student) */
            break;

        case 1:
            //tulosta studentlist vektorin kaikkien opiskelijoiden nimet,
            //vector<int> numbers;
            // Nyt: vector<Student> studentList;
            cout << "Opiskelijoiden nimet: ";
            for (Student s: studentList)  {
                cout << s.getName() << " ";
            }
            cout << endl;

            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            //sama vertailu, aakkosjärjestys a < b, b < c

            cout <<" Opiskelijoiden nimet aakkosjarjestyksessa" << endl;
            sort(studentList.begin(), studentList.end(),[](const Student &eka, const Student &toka)
                 { return eka.getName() < toka.getName();
                 }
                 );

            for (Student &s: studentList) {
                s.printStudentInfo();
            }

            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat

            cout<<"Opiskelijat ian mukaan jarjestetty: "<<endl;
            sort(studentList.begin(), studentList.end(),[](const Student &eka, const Student &toka)
                 {
                     return eka.getAge() < toka.getAge();
                 }
                 );

            for(Student s: studentList){
                s.printStudentInfo();
            }

            break;
        case 4:
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot. Tämäpä vaikia.
            {
                string searchName;
                cout <<"Nimi?: "<<endl;
                cin>> searchName;

                auto it = find_if(studentList.begin(), studentList.end(), [searchName](Student &s) {

                    return s.getName() == searchName;
                });

                if (it != studentList.end()){
                    cout << "opiskelija loytyi"<<endl;
                    it->printStudentInfo();
                }
                else
                    cout<<"opiskelija ei loytynyt";
                break;
            }

        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    }while(selection < 5);

    return 0;
}
