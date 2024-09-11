#include <bits/stdc++.h>
using namespace std;

void func(){
    static int x = 0; //static variables and object run through the lifetime of the program (until the main function is finished running)
    cout << "X: " << x << endl;
    x++;
}

int main(){
    func(); //When the program runs for first time the value of x is 0
    func(); //The value of x is 1 but when the func() is runned again it deletes the memory of x and creates a new memory where x = 0 so again x: 0 is printed and this is prevented by using "static" keyword as in Line 5 so the "static" keyword doesnot deletes the memory of the variable even if the func() is runned multiple times
    func();

    return 0;
}