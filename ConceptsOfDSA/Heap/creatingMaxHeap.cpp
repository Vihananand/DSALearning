#include <bits/stdc++.h>
using namespace std;

void Insert(int A[], int n) {
    int temp = A[n];
    int i = n;

    while (i > 1 && temp > A[i / 2]) {
        A[i] = A[i / 2];
        i = i / 2;
    }
    A[i] = temp;
}

void createAndDisplayHeap() {
    int A[] = {0, 3, 5, 1, 10, 2, 7};
    int size = 6;

    for (int i = 2; i <= size; i++) {
        Insert(A, i);
    }

    cout << "Heap is: ";
    for (int i = 1; i <= size; i++) {
        cout << A[i] << " ";
    }
}

int main() {
    createAndDisplayHeap();
    return 0;
}
