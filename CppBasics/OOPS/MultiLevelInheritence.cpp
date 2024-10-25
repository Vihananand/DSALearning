//Inheritence is the process by which a child class inherits the property from parent class and use its as it were their own property. So when we create an object of child class firstly the constructor of parent class will be called and then the constructor of child class will be called and opposite happens in deallocation of memory firstly the child class memory will be deallocated and then parent class.  

#include <bits/stdc++.h>
using namespace std;

//this is a parent class
class Person{
public:
    string name;
    int age;
};

//This is a child class who has inherited the properties of parent class called "Person"
class Student : public Person{
public:
    int rollNo;
};

//This is a child class which is inheriting the property of two parent classes at different level, this type of inheritence is called multi - level inheritence.
class gradStudent : public Student{
public:
    string researchArea;
};

int main(){
    gradStudent s1;
    s1.name = "Tony Stark";
    s1.researchArea = "Quantum Physics";
    cout << s1.name << endl;
    cout << s1.researchArea << endl;

    return 0;
}