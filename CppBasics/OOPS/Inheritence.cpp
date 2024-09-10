//Inheritence is the process by which a child class inherits the property from parent class and use its as it were their own property. So when we create an object of child class firstly the constructor of parent class will be called and then the constructor of child class will be called and opposite happens in deallocation of memory firstly the child class memory will be deallocated and then parent class.  

#include <bits/stdc++.h>
using namespace std;

//this is a parent class
class Person{
public:
    string name;
    int age;

    //Parametrized constructor made by user
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

//This is a child class who has inherited the properties of parent class
class Student : public Person{
public:
    int rollNo;

    //Inherited constructor to be called along with parent constructor made by user
    Student(string name, int age, int rollNo) : Person(name , age){
        this->rollNo = rollNo;
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "RollNo: " << rollNo << endl;
    }

};

int main(){
    Student s1("Vihan Anand", 20, 5);
    s1.getInfo();

    return 0;
}