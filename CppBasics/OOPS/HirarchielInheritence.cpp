//This is the type of inheritence where a parent class property is inherited by multiple child classes

#include <bits/stdc++.h>
using namespace std;

//Parent Class
class Person{
public:
    string name;
    int age;
};

//Child Clas
class Student : public Person{
public:
    int rollNo;
};

//Child Class
class Teacher : public Person{
public:
    double salary;
};

int main(){
    Student s1;
    s1.name = "Vihan Anand";
    s1.age = 20;
    s1.rollNo = 5;

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "RollNo.: " << s1.rollNo << endl;
}