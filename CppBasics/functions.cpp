#include <bits/stdc++.h>
using namespace std;

void printname(string name){
    cout << name << "!!!" << endl;
}

int sum(int num1, int num2){
    return num1 + num2;
}

int main(){
    string name;
    int num1, num2;
    getline(cin, name);
    printname(name); //All the function outside int main() is necessary to be called inside int main() because this function is the starting point of the program and cpp program executes from here only
    cin >> num1;
    cin >> num2;
    int result = sum(num1, num2);
    cout << result;
    return 0;
}