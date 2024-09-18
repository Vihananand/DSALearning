#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n * factorial(n-1); //the function is called inside the function itself
}

int main(){
    int  n;
    cout << "Please enter a number: ";
    cin >> n;

    if(n < 0){
        cout << "ERROR!";
    }
    else{
        cout << "Factorial of " << n << " is " << factorial(n);
    }
}