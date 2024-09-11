/*Abstraction is the process of hiding unnecessary details and showing only the things that are important
You can create an abstract class using the "abstract" keyword before class 
Abstract class are only the blueprint of the objects and they cannot be inherited or create their own objects*/

#include <bits/stdc++.h>
using namespace std;

class Shape{//abstract class
    virtual void draw() = 0; //pure virtual function
};

class Circle : public Shape{
public:
    void draw(){
        cout << "drawing a circle";
    }
};

int main(){
    Circle c1;
    c1.draw();

    return 0;
}