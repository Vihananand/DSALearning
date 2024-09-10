#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cin >> number;
    
    if(number < 25){
        cout << "Your grade: F";
    }
    else if(number >= 25 && number <= 44){
        cout << "Your grade: E";
    }
    else if(number >= 45 && number <= 49){
        cout << "Your grade: D";
    }
    else if(number >= 50 && number <= 59){
        cout << "Your grade: C";
    }
    else if(number >= 60 && number <= 79){
        cout << "Your grade: B";
    }
    else if(number >= 80 && number <= 100){
        cout << "Your grade: A";
    }
    return 0;
}