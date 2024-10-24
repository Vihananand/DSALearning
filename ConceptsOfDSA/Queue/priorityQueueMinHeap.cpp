#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Insert elements into the min-heap
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);
    minHeap.push(5);

    // Output the elements in ascending order
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";  
        minHeap.pop();                 
    }

    return 0;
}