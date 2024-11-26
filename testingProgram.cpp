#include <bits/stdc++.h>
using namespace std;


int main(){
    int arr[100][100];
    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
        for (int j = 0; i < size; j++){
            cin >> arr[i][j];
        }  
    }

    for(int i = 0; i < size; i++){
        for (int j = 0; i < size; j++){
            cout << arr[i][j] << " ";
        } 
        cout << endl; 
    }
}