/*
                    *                     
                  * * *                   
                * * * * *                 
              * * * * * * *               
            * * * * * * * * *                       

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int times;
    cin >> times;
    for (int i = 0; i <= times; i++)
    {
        for(int j = 0; j <= times - i - 1; j++){
            cout << "  ";
        }

        for (int k = 0; k < ((2 * i) + 1) ; k++)
        {
            cout << "* ";
        }
        
        for(int l = 0; l <= times - i - 1; l++){
            cout << "  ";
        }
        cout << endl;
    } 
}