# Binary Heap

## 1. What is a Heap?

- ### A **Heap** is a **complete binary tree**, meaning

  - ### There are no blank spaces between elements if represented in an array

  - ### Every level, except possibly the last, is fully filled, and all nodes are as far left as possible

- ### It’s often referred to as **complete or almost complete**

- ### **Binary heaps** are typically implemented as arrays, though linked representations are possible

## Key Properties of a Complete Binary Tree

- ### Nodes are filled from left to right

- ### For an array representation

  - ### **Left Child** of a node at index \( i \): `2 * i`

  - ### **Right Child** of a node at index \( i \): `2 * i + 1`

---

## 2. Types of Heaps

### Heaps can be either a **Max Heap** or a **Min Heap**

### <u>Max Heap</u>

- ### Each node’s value is **greater than or equal to all its descendants**

- ### Duplicate values are allowed

- ### Example: A node with value `30` has children with values less than or equal to `30`

### <u>Min Heap</u>

- ### Each node’s value is **less than or equal to all its descendants**

- ### Example: A node with value `5` has children with values greater than or equal to `5`

> ### **Summary**: A heap is a **complete binary tree** that satisfies either the **max heap** or **min heap** property

---

## 3. Representation and Structure

- ### Heaps are generally represented as arrays for efficient access and modification

- ### The **height** of a heap (complete binary tree) is **log N**, where `N` is the number of nodes

  - ### This property helps in keeping operations efficient

  - ### The height remains log N because elements are filled level by level from left to right

## Important Property

- ### Insertion into a heap

  - ### New nodes are added to the next available position

  - ### This ensures the structure remains a complete binary tree without unnecessary height increases

- ### **Heap height remains at log N**, which provides efficient performance for heap operations

---

## 4. Heap Utility

- ### **Heaps are not optimized for searching**; they are generally used for

  - ### Efficiently accessing the maximum (in a max heap) or minimum (in a min heap) element

  - ### Priority queues, where priorities of elements determine their position in the heap

---
<br>

# Procedure for Inserting in a Max Heap

### This section explains the insertion function for a max heap, which arranges elements to maintain the max heap property. Below is the detailed procedure

## Insert Function Overview

- ### **Parameters**

  - ### `A`: Array where the heap elements are stored

  - ### `n`: Index of the newly inserted element

- ### **Goal**

  - ### Place the newly added element in the correct position within the heap to satisfy the max heap property

### Steps for the Insert Function

### 1. **Initialize Variables**

- ### `temp`: Temporary variable to hold the value of the new element

- ### `i`: Pointer initially set to `n` (the index of the new element)

### 2. **Assign the Value to Temp**

- ### Set `temp = A[n]` (copy the value at the new index into `temp`)

- ### `i` is initially `n`, pointing to the newly inserted element

### 3. **Heapify Upwards**

- ### Use a `while` loop to check if `temp` needs to move up in the heap

- ### **Condition**: Continue while `i > 1` (not at root) and `temp > A[i // 2]` (temp is greater than its parent)

- ### **Steps in Loop**

  - ### If `temp` is greater than its parent (`A[i // 2]`), copy the parent’s value to the current position (`A[i] = A[i // 2]`)

  - ### Move `i` up by setting `i = i // 2` (move to the parent’s index)

### 4. **End of Loop**

- ### The loop stops either when `temp` is not greater than its parent or when `i` has reached the root

- ### **Place `temp`** at `A[i]` (final position in the heap)

### Code Example

```c++
#include <iostream>
using namespace std;

void insert(int A[], int n) {
    int temp = A[n];
    int i = n;

    while (i > 1 && temp > A[i / 2]) {
        A[i] = A[i / 2];
        i = i / 2;
    }
    A[i] = temp;
}

int main() {
    int A[11] = {0, 30, 20, 15, 5, 10, 12, 6, 40, 35};

    int n = 10;
    A[n] = 50;

    insert(A, n);

    cout << "Heap after insertion: ";
    for (int i = 1; i <= n; i++) {
        cout << A[i] << " ";
    }
    return 0;
}
```
<br>

# Creating a Heap

## Example of a Max Heap
- ### A max heap example: `[30, 20, 10]` 
  - ### 30 is greater than both 20 and 10, satisfying max heap properties.
- ### We can add new elements one by one to maintain the heap structure.

## In-Place Heap Creation
- ### **Inserting multiple elements**:
  - ### Example: Insert 40, 15, 12, 25 in an array `[30, 20, 10]`.
  - ### Start with the initial heap, then add elements one-by-one to form a complete max heap.
- ### **In-place adjustment**:
  - ### No extra array is needed, all adjustments happen within the same array.
  - ### This approach is called **in-place heap creation**.

## Step-by-Step Heap Construction
### 1. **First element** is already in the heap by itself.
### 2. **Inserting 20**:
   ### - Becomes left child of 10, swapped up as 20 > 10.
### 3. **Inserting 30**:
   ### - Added as a child, compared with its parent, and adjusted to root.
### 4. **Further Insertions** (25, 5, 40, 35):
   ### - Each element is inserted in complete binary order.
   ### - Compared with its parent and swapped until it satisfies the heap property.

## Final Heap Result
- ### After all insertions and adjustments, the final array representing the heap: `[40, 25, 35, 10, 5, 20, 30]`.

## Procedure for Creating a Heap
### 1. **Assume** the first element is a heap.
### 2. Insert elements one by one from the array.
### 3. Each insertion is done by comparing the new element with its parent and adjusting it within the heap.
### 4. The array remains in-place.

### Create MaxHeap Function
```c++
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

```

### Create MinHeap Function
```c++
#include <bits/stdc++.h>
using namespace std;

void Insert(int A[], int n) {
    int temp = A[n];
    int i = n;

    while (i > 1 && temp < A[i / 2]) {
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
```




