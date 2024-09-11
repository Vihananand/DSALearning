#include <bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int rollNo;
};

class Teacher{
public:
    string subject;
    double salary;
};

class TeacherAssistant : public Student, public Teacher{

};

int main(){
    TeacherAssistant t1;
    t1.name = "Tony Stark";
    t1.subject = "Quantum Physics";

    cout << t1.name << endl;
    cout << t1.subject << endl;

    return 0;
}