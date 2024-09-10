// Encapsulation is the process where the different data properties and functions are combined in the form of class which makes it easier for hiding data. 

#include <bits/stdc++.h>
using namespace std;

class Teacher{
private:
    double salary; //Data is hidden

public:
    string name;
    string department;
    string subject;

    void changeDept(string newDept){
        department = newDept;
    }
};

int main(){
    Teacher t1;
    t1.name = "Vihan Anand";
    t1.subject = "C++";
    t1.department = "Computer Science";

    cout << "Teacher Name: " << t1.name << endl;

    return 0;
}