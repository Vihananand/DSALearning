/*"Polymorphism" also known as "Constructor Overloading" is the ability of object to take many different form depending on the context in which they are used. Polymorphism is of two types:

1. Compile-Time Polymorphism - Function or Constructor Overloading
2. Runtime Polymorphism - Function Overriding*/

#include <bits/stdc++.h>
using namespace std;

class Student{
    string name;

    Student(){
        cout << "This is a non-parameterized constructor" << endl;
    };

    Student(string name){
        this->name = name;
        cout << "Parameterized constructor";
    };
};

int main(){

}