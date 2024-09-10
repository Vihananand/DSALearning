#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        double* cgpaPtr;

        Student(string name, double cgpa){
            this->name = name;
            cgpaPtr = new double;
            *cgpaPtr = cgpa;;
        }

        //This is a user defined destructor
        ~Student(){
            cout << "Hi! I am a destructor.";
            delete cgpaPtr; //This will deallocate dynamically allocated memory
        }//the destructor created by computer automatically only deallocates the memory that is statically allocated. Dynamically allocated memory can be deallocated dynamically only.

        void getInfo(){
            cout << "Name: " << name << endl;
            cout << "CGPA: " << *cgpaPtr << endl;
        }
};

int main(){
    Student s1("Vihan Anand", 7.9);
    s1.getInfo();

    return 0;
}