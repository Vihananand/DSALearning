#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void minHeapify(int heap[], int size, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && heap[left] < heap[smallest])
        smallest = left;

    if (right < size && heap[right] < heap[smallest])
        smallest = right;

    if (smallest != i) {
        swap(&heap[i], &heap[smallest]);
        minHeapify(heap, size, smallest);
    }
}

void buildMinHeap(int heap[], int size) {
    for (int i = size / 2 - 1; i >= 0; i--) {
        minHeapify(heap, size, i);
    }
}

void insertElement(int heap[], int *size, int value) {
    (*size)++;
    heap[*size - 1] = value;

    int i = *size - 1;
    while (i > 0 && heap[(i - 1) / 2] > heap[i]) {
        swap(&heap[i], &heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void displayMinHeap(int heap[], int size) {
    cout << "Min Heap is: ";
    for (int i = 0; i < size; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

double averageOfElements(int heap[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += heap[i];
    }
    return (double)sum / size;
}

int main() {
    int heap[] = {3, 5, 1, 10, 2, 7};
    int size = 6;

    buildMinHeap(heap, size);

    cout << "Initial ";
    displayMinHeap(heap, size);

    insertElement(heap, &size, 4);
    cout << "After insertion of 4: ";
    displayMinHeap(heap, size);
    
    double avg = averageOfElements(heap, size);
    cout << "Average of elements: " << avg << endl;

    return 0;
}
