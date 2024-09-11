//Function Overriding happens when the parent and child class both have the same function with same parameters then the child calss replaces the fucntion of parent class

#include <bits/stdc++.h>
using namespace std;

class Parent{
public:
    void show(){
        cout << "Parent Class";
    }
};

class Child : public Parent{
public:
    void show(){
        cout << "Child Class";
    }
};

int main(){
    Child c;
    c.show(); //Here the same fuction of child class is overriding the function of parent class

    return 0;
}