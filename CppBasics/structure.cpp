#include <bits/stdc++.h>
using namespace std;

//This is the blueprint of a structure. In structure I can use all the data inside structure at once as I have done in Line 14 15 16.
typedef struct Student
{
    string name;
    int age;
    float CGPA;
} student;

int main(){
    student v; //Object of strucutre is created
    v.name = "Vihan"; //Data members are accessed
    v.age = 20;
    v.CGPA = 7.94;

    cout << "Name: " << v.name << endl;
    cout << "Age: " << v.age << endl;
    cout << "CGPA: " << v.CGPA << endl;
}