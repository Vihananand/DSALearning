//Constructor are special methods that are automatically invoked at the time of object creation and these are used for initialisation

#include <bits/stdc++.h>
using namespace std;

class Teacher{
private:
    double salary;

public:

    string name;
    string department;
    string subject;
    
    // "Teacher" is a user made constructor and is used to initialize values to the objects of the class that we don't want to change

    //Non-parameterized Constructor
    // Teacher(){
    //     //cout << "This is a constructor!";
    //     department = "Computer Scienece";
    // }
    
    //Parameterized Constructor
    Teacher(string n, string d, string s, double sal){
        name = n;
        department = d;
        subject = s;
        salary = sal;
    }

    void changeDept(string newDept){
        department = newDept;
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
    }
};

int main(){
    Teacher t1("Vihan Anand", "Computer Science and Engineering", "C++", 90000.00); //this is a constructor call and it is only called once at the time of object creation
    t1.getInfo();
    return 0;
}