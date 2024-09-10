#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        double* cgpaPtr;

        Student(string name, double cgpa){
            this->name = name;
            cgpaPtr = new double;
            *cgpaPtr = cgpa;
        }

        //This is custom copy constructor made by us
        Student(Student &newObj){
            this->name = newObj.name;
            cgpaPtr = new double;
            *cgpaPtr = *newObj.cgpaPtr; //This statement creates a deep copy and even if there is a pointer it creates the copy of pointer at different memory address
        }

        void getInfo(){
            cout << "Name: " << name << endl;
            cout << "CGPA: " << *cgpaPtr << endl;
        }
};

int main(){
    Student s1("Vihan Anand", 7.9);
    Student s2(s1); //This is shallow copy and it copies all the member values from one object to another but there is a problem with shallow copy and that is if there is a pointer in member the copied member will also point to the same memory address so even if you change the values of copied pointer it will change the value of original pointer because it is poiniting ot same value

    s1.getInfo();
    *(s2.cgpaPtr) = 7.6;
    s2.name = "Nancy Kumari";
    s2.getInfo();

    return 0;
}