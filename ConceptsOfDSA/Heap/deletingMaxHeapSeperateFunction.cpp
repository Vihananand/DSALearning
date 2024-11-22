#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void maxHeapify(int arr[], int size, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && arr[left] > arr[largest])
        largest = left;

    if (right < size && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        maxHeapify(arr, size, largest);
    }
}

void buildMaxHeap(int arr[], int size) {
    for (int i = (size / 2) - 1; i >= 0; i--) {
        maxHeapify(arr, size, i);
    }
}

void insertElement(int arr[], int *size, int value) {
    (*size)++;
    arr[*size - 1] = value;

    int i = *size - 1;
    while (i > 0 && arr[(i - 1) / 2] < arr[i]) {
        swap(&arr[i], &arr[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void deleteMax(int arr[], int &size) {
    arr[0] = arr[size - 1];
    maxHeapify(arr, size, 0);
}

void displayMaxHeap(int arr[], int size) {
    cout << "Max Heap is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

double averageOfElements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
}

int main() {
    int n;
    cin >> n;

    int *arr = new int[n];
    int size = 0;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        insertElement(arr, &size, value);
    }

    buildMaxHeap(arr, size);
    displayMaxHeap(arr, size);

    double average = averageOfElements(arr, size);
    cout << "Average: " << fixed << setprecision(2) << average << endl;

    deleteMax(arr, size);
    displayMaxHeap(arr, size);

    delete[] arr;
    return 0;
}
