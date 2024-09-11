#include <bits/stdc++.h>
using namespace std;

class Print{
public:
    //This is function overloading in which many functions of same name are created but either the return type of parameters is changed or the number of parameters is changed so the class chooses the function according to the usage
    void show(int x){
        cout << "The value of x: " << x;
    }

    void show(char x){
        cout << "The value of x: " << x;
    }
};

int main(){
    Print p;
    p.show('A');
}