#include <iostream>
using namespace std;

int main(){
    float d = 34.4f; // This 34.4 will be passed as float because of 'f'
    long double e = 34.4l; // This 34.4 will be passed as long double becaus eof 'l'

     cout << "The size of d is " << sizeof(d) << " bytes." << endl;
     cout << "The size of e is " << sizeof(e) << " bytes." << endl;
     cout << "The size of 34.4 is " << sizeof(34.4) << " bytes." << endl << endl; // IF we define a decimal number c++ compiler takes it as double value.

     float x = 3555.8;
     float &y = x; // The '&y' is a reference variable because it  is reffering to the value of x.

     cout << "The value of x is " << x << endl; 
     cout << "The value of &y is " << y << endl; 

     int a = 129;
     cout << "The value of a is " << char(a) << endl; // Here the integer is typecasted to character
}