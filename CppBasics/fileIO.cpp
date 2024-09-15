#include <bits/stdc++.h>
using namespace std;

/*
The useful classes for working with files in C++ are:

1. fstreambase
2. ifstream --> derieved from fstreambase
3. ofstream --> derieved from fstreambase

Primarily there are two ways to open a file:

1. Using a constructor
2. Using the member function open() of the class
*/

int main(){
    //This is how we will perform writing operation in C++
    string message = "Hello I am under the water here too much raining. Whooooooooo!";
    ofstream out("sample.txt"); //Here the sample.txt was blank txt
    out << message;//But the message will be written in the sample.txt file

    //This is how we will perform reading operation in C++
    string m;
    ifstream in("sample2.txt");

    // in >> m;
    // cout << "Message: " << m; //This will only print the first word of the file because it does not include spaces and blanks but if you want to read the whole line you have to use getline()

    getline(in, m);
    cout << m;
}