#include <bits/stdc++.h>
using namespace std;

int main(){
    //enum(Enumerator) is used to number variables in order from 0 so breakfast will have 0 stored in it. It is generally used for real life objects that are fixed and dont tend to change like directions{east, west north, south}
    enum Meal {breakfast, lunch, dinner};
    Meal m1 = dinner;
    cout << m1;
}