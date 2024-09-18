#include <bits/stdc++.h>
using namespace std;

class Distance{
    int meters = 0;

public:

    void displayData(){
        cout << "Distance: " << meters << " meters" << endl;
    }

    friend void addValue(Distance &d); // This is the declaration that addValue is a friend function and it can acess the private members of the class
};

//This is a function that is friend of the class so it has access to all the private members of the class even if it is outside the class
void addValue(Distance &d){
    d.meters = d.meters + 5;
}

int main(){
    Distance d1;
    d1.displayData();

    addValue(d1);
    d1.displayData();
}