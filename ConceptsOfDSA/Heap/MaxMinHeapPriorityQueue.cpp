#include <bits/stdc++.h>
using namespace std;

void buildMaxHeap(int arr[], int n) {
    priority_queue<int> maxHeap;

    for (int i = 0; i < n; i++) {
        maxHeap.push(arr[i]);
    }

    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;
}

void buildMinHeap(int arr[], int n) {
    priority_queue< int, vector<int>, greater<int> > minHeap;

    for (int i = 0; i < n; i++) {
        minHeap.push(arr[i]);
    }

    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;
}

int main() {
    int arr[] = {15, 10, 20, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Input Elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    buildMaxHeap(arr, n); 
    buildMinHeap(arr, n);

    return 0;
}
