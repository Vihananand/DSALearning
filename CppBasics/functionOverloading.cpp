//Function overloading is the process of making multiple functions with same name but either diffrent in parameters or number of parameters

#include <bits/stdc++.h>
using namespace std;

int add(int a, int b){
    return a + b;
}

int add(int a, int b, int c){
    return a + b + c;
}

int main(){
    cout << "The sum of two numbers is " << add(7, 9) << endl;
    cout << "The sum of three numbers is " << add(7, 9, 13) << endl;
}