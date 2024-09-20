#include <bits/stdc++.h>
using namespace std;

class Teacher{
private:
    double salary;

public:
    string name;
    string department;
    string subject;

    void changeDept(string newDept){
        department = newDept;
    }

    //setter
    void setSalary(double salary){
        this->salary = salary;
    }
    //getter
    double getSalary(){
        return salary;
    }
};

int main(){
    Teacher t1;
    t1.name = "Vihan Anand";
    t1.subject = "C++";
    t1.department = "Computer Science";
    t1.setSalary(25000.00);


    cout << "Teacher Name: " << t1.name << endl;
    cout << "Salary: " << t1.getSalary();

    return 0;
}