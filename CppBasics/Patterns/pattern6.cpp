/*
            1        1
            12      21
            123    321
            1234  4321
            1234554321 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int times;
    cin >> times;

    int space = 2 * (times - 1);

    for (int i = 1; i <= times; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
        space -= 2;
        
    }
    
}