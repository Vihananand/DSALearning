#include <bits/stdc++.h>
using namespace std;

void Insert(int A[], int n){
    int temp = A[n];

    while(n > 0 && temp > A[n/2]){
        A[n] = A[n/2];
        n = n / 2;
    }

    A[n] = temp;
}

void createAndDisplayHeap() {
    int A[] = {3, 5, 1, 10, 2, 7};
    int size = 6;

    for (int i = 0; i < size; i++) {
        Insert(A, i);
    }

    cout << "Heap is: ";
    for (int i = 0; i < size; i++) {
        cout << A[i] << " ";
    }
}

int main() {
    createAndDisplayHeap();
    return 0;
}
