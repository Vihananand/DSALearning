# Queue Notes

### 1. Queue is a type of data structure where an item can be inserted from one end and can be removed from other end only. It is based on the principle of FIFO (First In First Out)

### 2. We will need two pointer to store the front and back of the Queue.

### 3. Stack has these important operations: 

```c++
enqueue(x); //push element in queue
dequeue(x); //remove elemnt from queue
peek(); //tells the value that is in front
empty(): //tell if the queue is empty or not
```

### 4. Queue can be made from Linked List and Stack also.

### 5. We have 2 approach to insert the element in queue using Stack:

### <ol><li> Using 2 stack to pop elements, where the dequeue process becomes costly.<li> Using 1 stack to insert elements.

### In both the methods only pop function has a difference:

### Method 1:
~~~c++
//Here we will define two stack s1 and s2 using STL

int pop(){
        if(s1.empty() && s2.empty()){
            cout << "Queue is empty!!" << endl;
            return -1;
        }

        if(s2.empty()){
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }    
        }
        int topval = s2.top();
        s2.pop();
        return topval;
    }
~~~

### Method 2:

~~~c++
//Here we use only one stack s1 which is created using STL

int pop(){
        if(s1.empty()){
            cout << "Queue is empty!!" << endl;
            exit(0);
        }

        int x = s1.top();
        s1.pop()
        ;
        if(s1.empty()){
            return x;
        }

        int item = pop();
        s1.push(x);
        return item;
    }
~~~

### <u>Priority Queue</u>

### <ol><li>A Priority Queue is an abstract data type which operates similar to a queue but the only difference is that every element has a priority in which they have to be removed from the queue.</li> <br><li>Priority Queue works on the concept of Heap. A heap is a tree based data structure that satisfies the heap invariant (if A is th parent node of B then A should be ordered with respect to B for all nodes A, B is the heap).</li></ol>

### Implementation of Max- heap
```c++
//Max heap which gives priority to the highest elemnt to be appear at top
#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> maxHeap; 

    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);
    maxHeap.push(5);

    // Output the elements in priority order
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";  
        maxHeap.pop();                 
    }

    return 0;
}

```
### Implementation of Min - heap

```c++
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

```