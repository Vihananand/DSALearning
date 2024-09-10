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
    
    /*  "Teacher" is a user made constructor and is used to initialize values to the objects of the class that we don't want to change
    We can have multiple constructor with same name in C++ but we have to make sure the value of object should be different in both*/

    Teacher(){
        //cout << "This is a constructor!";
        department = "Computer Scienece";
    }

    //this keyword is used to point to the object of the class so the "name" in the left of = is the object of the class and the "name" after = is the parameter of the function

    Teacher(string name, string department, string subject, double salary){
        this->name = name;
        this->department = department;
        this->subject = subject;
        this->salary = salary;
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