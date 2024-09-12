#include <bits/stdc++.h>
using namespace std;

int main(){
    int i = 5;
    
    int *p = 0; //This is a null pointer because it is not pointing to anything inside memory
    p = &i; //But now the null pointer is poinitng to the address of i so now its not a null pointer anymore   

    cout << "Value: " << *p << endl;
    cout << "Address: " << p << endl << endl;

    cout << "Value before: " << *p << endl;
    cout << "Value after: " << ++(*p) << endl << endl;

    int *q = p; //This is the process of "Copying a pointer" now q is a copy of pointer p and has acess to the same block that p was pointing to

    cout << q << " - " << p << endl;
    cout << *q << " - " << *p << endl << endl;

    cout << "Adding the value: " << (*q) + 2 << endl;
    cout << "Adding the address: " << q + 1 << endl; //This will add 4 bytes to the adress because 4 bytes of memory is taken already by a integer
}