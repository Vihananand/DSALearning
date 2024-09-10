/*
1
01
101
0101
10101
010101
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int times;
    int start = 1;
    cin >> times;
    for (int i = 0; i <= times; i++)
    {
        if(i % 2 == 0) start = 1;
        else start = 0;

        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        
        cout << endl;
    }  
}