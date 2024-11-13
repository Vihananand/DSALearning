#include <bits/stdc++.h>
using namespace std;

void Insert(int H[], int n){
    int temp = H[n], i = n;

    while (i > 1 && temp > H[i/2])
    {
        H[i] = H[i/2];
        i = i / 2;
    }    
    H[i] = temp;
}

void Display(int H[]){

    cout << "Heap: ";
    for (int i = 1; i <= 7; i++)
    {
        cout << H[i] << " ";
    }
}

int main(){
    int H[] = {0, 5, 65, 40, 10, 15, 45, 70};

    for (int i = 1; i <= 7; i++)
    {
        Insert(H, i);
    }

    Display(H);
    return 0;
}