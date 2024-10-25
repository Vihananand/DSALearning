#include <bits/stdc++.h>
using namespace std;

//This function will run (2^n-1) times
void TowerOfHanoi(int n, int A, int B, int C){
    if(n > 0){
        TowerOfHanoi(n-1, A, C, B);
        cout << "Moved a disc from " << A << " to " << C << endl; 
        TowerOfHanoi(n-1, B, A, C);
    }
}

int main(){
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;

    TowerOfHanoi(n, 1, 2, 3);
    return 0;
}