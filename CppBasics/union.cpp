#include <bits/stdc++.h>
using namespace std;

/*This is the blueprint of a union. In union I cannot use all the data inside union at once. It can only initialize one data at a time and use it, if you try to use multiple at a time it will throw error or will shpw a garbage value.

In C++, unions cannot contain non-trivial types (like std::string), as unions do not call constructors or destructors for such types. This restriction exists because unions are intended to store only one value at a time, and managing complex data types like std::string requires proper construction and destruction, which unions don't handle.*/

union Currency
{
    int inr;
    char item;
    float dollars;
};

int main(){
    union Currency c1; //Object of strucutre is created
    c1.inr = 500; //Data members are accessed

    cout << "Currency: " << c1.inr << " INR" << endl;
}