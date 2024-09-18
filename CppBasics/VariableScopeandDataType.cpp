#include <iostream>
using namespace std;

int global = 60; //This is a global variable because it is present outside the function.

int sum(){
    cout << "\nThe value of global variable is " << global;
    return 0;
}

int main(){
    int a = 15, b = 69;
    int global = 90; //This is a local variable with the same name as global variable. This is allowed in C++.
    char c = 'a';
    bool bo = true;
    string s = "Vihan Anand";
    cout << "The value of a is " << a << ".\nThe value of b is " << b << ".";
    cout << "\nThe character c is " << c;
    cout << "\nThe value of local variable is " << global;
    sum();
    cout << "\n" << bo;
}