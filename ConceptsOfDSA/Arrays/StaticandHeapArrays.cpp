#include <iostream>
using namespace std;

int main(){
    int A[5] = {2, 4, 6, 8, 10}; //Static allocation of array which occurs in stack part of memory and its size cannot be changed
    int *p;

    p = (int *) malloc (5 * sizeof(int)); //Dynamic allocatiion of array which is created in heap part of the memory and the size can be adjusted according to the requirements

    p[0] = 1;
    p[1] = 3;
    p[2] = 5;
    p[3] = 7;
    p[4] = 9;

    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }
    
}