#include <iostream>
using namespace std;

int main(){
    int a = 16;
    int b = 8;

    cout << "The value of a is " << a << " and the value of b is " << b << endl; 
    cout << "Arithematic Operators: + - * / %" << endl; // Perform arithematic Operations
    cout << "a + b: " << a + b << endl;
    cout << "a - b: " << a - b << endl;
    cout << "a * b: " << a * b << endl;
    cout << "a / b: " << a / b << endl;
    cout << "a % b: " << a % b << endl;
    cout << "++a: " << ++a << endl;
    cout << "--a: " << --a << endl << endl;

    cout << "Assignment Operators: =" << endl << endl; // Used to assign values to a variable
    // int c = 50;
    // bool ab = true;

    cout << "Comparison Operators: ==, !=, <=, >=, <, >" << endl;
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << "The value of a > b is " << (a > b) << endl << endl;

    cout << "Logical Operator: && and ||" << endl;
    cout << "the value of (a == b) && (a != b) is " << ((a == b) && (a != b)) << endl;
    cout << "the value of (a == b) || (a != b) is " << ((a == b) || (a != b)) << endl;

    
    return 0;
}