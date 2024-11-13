#include <bits/stdc++.h>
using namespace std;

void Insert(int H[], int i){
    int temp = H[i];

    while (i > 0 && temp > H[i/2])
    {
        H[i] = H[i/2];
        i = i / 2;
    }    
    H[i] = temp;
}

int Delete(int A[], int n) {
    int i, j, x, temp, val;
    val = A[1];

    x = A[n];
    A[1] = A[n];

    i = 1; 
    j = 2 * i;

    while (j < n - 1)
    {
        if(A[j + 1] > A[j]){
            j = j + 1;
        }
        if(A[i] < A[j]){
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;

            i = j;
            j = j * 2;
        }
        else{
            break;
        }
    }
    return val; 
}

void Display(int H[]){

    cout << "Heap: ";
    for (int i = 0; i < 7; i++)
    {
        cout << H[i] << " ";
    }
}

int main(){
    int H[] = {5, 65, 40, 10, 15, 45, 70};

    for (int i = 0; i < 7; i++)
    {
        Insert(H, i);
    }

    Display(H);
    return 0;
}