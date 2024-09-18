#include <bits/stdc++.h>
using namespace std;

int c = 45; //global variable

int main(){
    int a = 90;
    int b = 89;
    float d = 34.56; //the datatype of d is float because d is defined as float but whenever we pass any decimal numbers it is taken as double by the compiler but if we want the compiler to pass it as float we can write a small f after it "34.56f"

    int c = a + b;
    int &x = a; //'&' is a referencing operator and it is used to point a variable and as "&" is used with x the x will point to the value of a 

    cout << "The value of c: " << c << endl;
    cout << "The value of c: " << ::c << endl; //"::" is used to access the global variable 
    cout << "The datatype d: " << typeid(d).name() << endl;
    cout << "The value of a: " << x << endl;

}