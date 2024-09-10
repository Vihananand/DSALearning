#include <bits/stdc++.h>
using namespace std;

void doSomething(int &num){
    cout << num << endl;
    num = num + 10;
    cout << num << endl;
    num = num + 10;
    cout << num << endl << endl;
}

int main(){
    int num = 10;
    doSomething(num); /*In pass by reference address of original variable is sent to the function so the original variable changes.
    
    NOTE: Arrays, Vectors all get automatically passed by reference.*/
    cout << num;
}