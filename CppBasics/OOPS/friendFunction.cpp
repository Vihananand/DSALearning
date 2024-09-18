#include <bits/stdc++.h>
using namespace std;

class Complex{
public:
    int a, b;
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }
    void printNumber(){
        cout << a << " + " << b << "i" << endl;
    }
};

int main(){
    Complex c1;

    c1.setNumber(4, 8);
    c1.printNumber();
}