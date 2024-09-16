#include <bits/stdc++.h>
using namespace std;

int main(){
    ofstream out;
    out.open("sample.txt");
    out << "Hello I am under the water!!";
    out.close();

    string message;
    ifstream in;
    in.open("sample2.txt");

    //the problem with the line below is that it will read only one word of the file and will not include spaces nextline and even if we use getline() it will only read one line at a time and wherever it will detect a nextline it will stop there

    // in >> message;

    //eof means end of file so it will run the while loop until it reaches the end of file and will print all the lines in the file
    while (in.eof() == 0)
    {
        getline(in, message);
        cout << message << endl;
    }
    in.close();
}