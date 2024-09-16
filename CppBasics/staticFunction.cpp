#include <bits/stdc++.h>
using namespace std;

class Employee{
    int id;
    static int count; //You cannot change the value of count here but you can do it in Line 26

public:
    void setID(){
        cout << "Enter Employee ID: ";
        cin >> id;
        count++;
    }

    void getID(){
        cout << "The ID of Employee: " << id << endl;
    }

    //static function can access only the static member
    static void getCount(){
        // cout << id //Throws an error because
        cout << "This is Employee " << count << endl;
    }
};

//The line below is the method of using a static data member of a class
int Employee :: count = 1000; //Default value of count is 0

int main(){
    Employee Vihan, Nancy, Ayush;

    Vihan.setID();
    Vihan.getID();
    Employee::getCount(); //This is the method of using a static function

    Nancy.setID();
    Nancy.getID();
    Employee::getCount();

    Ayush.setID();
    Ayush.getID();
    Employee::getCount();
}