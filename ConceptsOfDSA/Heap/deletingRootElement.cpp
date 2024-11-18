#include <bits/stdc++.h>
using namespace std;

void Insert(int A[], int n) {
    int temp = A[n];

    while (n > 0 && temp > A[(n - 1) / 2]) {
        A[n] = A[(n - 1) / 2];
        n = (n - 1) / 2;
    }

    A[n] = temp;
}

void DisplayHeap(int A[], int size) {
    cout << "Heap is: ";
    for (int i = 0; i < size; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int Delete(int A[], int &n) {
    int i, j, x, temp, val;

    val = A[0];
    x = A[--n];
    A[0] = x;
    

    i = 0;
    j = 2 * i + 1;

    while (j < n) {
        if (j + 1 < n && A[j + 1] > A[j]) {
            j = j + 1;
        }

        if (A[i] < A[j]) {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;

            i = j;
            j = 2 * i + 1;
        } else {
            break;
        }
    }

    return val;
}

int main() {
    int A[] = {3, 5, 1, 10, 2, 7};
    int size = 6;

    for (int i = 1; i < size; i++) {
        Insert(A, i);
    }

    cout << "Initial ";
    DisplayHeap(A, size);

    int deletedValue = Delete(A, size);
    cout << "Deleted value: " << deletedValue << " " << endl;

    cout << "After deletion ";
    DisplayHeap(A, size);

    return 0;
}
