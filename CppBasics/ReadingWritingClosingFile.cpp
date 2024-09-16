#include <bits/stdc++.h>
using namespace std;

int main(){
    //making pipeline with output file named sample.txt to read and write details in it
    ofstream out("sample.txt"); //If you open the file like this you need to close it usin out.close() otherwise the file will remain open for the entire time
    cout << "Enter your name: ";
    string name;
    cin >> name;

    out << "My name is " + name;
    out.close();

    ifstream in("sample.txt");
    string message;
    // in >> message;
    getline(in, message);

    cout << "Message: " << message;
    in.close();

    return 0;
}