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

void DisplayHeap(int A[], int size) {
    cout << "Heap is: ";
    for (int i = 1; i <= size; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int Delete(int A[], int &size) {
    int val = A[1];
    A[1] = A[size];
    size--;

    int i = 1;
    int j = 2 * i;

    while (j <= size) {
        if (j < size && A[j + 1] > A[j]) {
            j = j + 1;
        }

        if (A[i] >= A[j]) {
            break;
        }

        swap(A[i], A[j]);
        i = j;
        j = 2 * i;
    }
    return val;
}

int main() {
    int A[] = {0, 3, 5, 1, 10, 2, 7};
    int size = 6;

    for (int i = 2; i <= size; i++) {
        Insert(A, i);
    }

    cout << "Initial ";
    DisplayHeap(A, size);

    int deletedValue = Delete(A, size);
    cout << "Deleted value: " << deletedValue << endl;

    cout << "After deletion ";
    DisplayHeap(A, size);

    return 0;
}
