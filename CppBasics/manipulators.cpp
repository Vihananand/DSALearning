#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 10, b = 258, c = 1258;
    float d = 4.5269874152;
    double e = 15368.1259874;
    bool f = true;
    double g = 5.0;

    //setw sets the width of the characters/integers
    cout << "Value of A: " << setw(4) << a << endl;
    cout << "Value of B: " << setw(4) << b << endl;
    cout << "Value of C: " << setw(4) << c << endl;

    //fixed is often used in combination with setprecision to control the number of digits after the decimal.
    cout << "Value of d in 3 decimal places is " << fixed << setprecision(3) << d << endl;

    //Sets the number of digits to display for floating-point numbers
    cout << "Value of d in 3 significant figures is " << setprecision(3) << d << endl;

    //Forces floating-point numbers to be displayed in scientific notation
    cout << "The value of e in scientific form is " << scientific << e << endl << endl;

    //Controls the alignment of output within a field. left aligns output to the left, and right aligns it to the right (default).
    cout << left << setw(10) << a << endl;
    cout << right << setw(10) << a << endl;

    //boolalpha forces true or false to be printed instead of 1 or 0 for bool types. noboolalpha switches back to printing 1 or 0.
    cout << boolalpha << f << endl;
    cout << noboolalpha << f << endl;

    //Forces floating-point numbers to display a decimal point, even if there are no digits after it.
    cout << showpoint << g << endl;
    cout << noshowpoint << g << endl;

    //Controls the base of integer outputs. hex prints in hexadecimal, oct prints in octal, and dec prints in decimal (default).

    cout << "Decimal: " << dec << b << endl;
    cout << "Hexadecimal: " << hex << b << endl;
    cout << "Octal: " << oct << b << endl;

    //Converts the base integer into binary
    cout << "Binary: " << bitset<16>(b) << endl;

    //Fills the unused space in a field with a specified character. Often used with setw
    cout << setfill('*') << setw(10) << a << endl;

    return 0;
}