# Revise

### Insert Elements in Binary Search Tree and Traversal in BST

```c++
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insertBST(root->left, val);
    }
    else{
        root->right = insertBST(root->right, val);
    }
    return root;
}

//Traversal in BST
void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main(){
    Node* root = NULL;
    root = insertBST(root, 5); //This is the root of BST
    insertBST(root, 6);
    insertBST(root, 3);
    insertBST(root, 2);
    insertBST(root, 1);
    insertBST(root, 7);
    insertBST(root, 4);

    preOrder(root);
    cout << endl;

    inOrder(root);
    cout << endl;

    postOrder(root);
    cout << endl;

    return 0;
}
```
---
### Searching in BST

```c++
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insertBST(root->left, val);
    }
    else{
        root->right = insertBST(root->right, val);
    }
    return root;
}

Node* searchInBST(Node* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    if(root->data > key){
        searchInBST(root->left, key);
    }
    return searchInBST(root->right, key);
}

int main(){
    Node* root = NULL;
    root = insertBST(root, 5); //This is the root of BST
    insertBST(root, 6);
    insertBST(root, 3);
    insertBST(root, 2);
    insertBST(root, 1);
    insertBST(root, 7);
    insertBST(root, 4);

    if(searchInBST(root, 5) == NULL){
        cout << "Key doesn't exist!!" << endl;
    }
    else{
        cout << "Key exsist!";
    }
    return 0;
}
```
---
### Ascending Order in Queue (Priority Queue)
```c++
#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int> > minHeap;

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
---
### Descending Order in Queue (Priority Queue)
```c++
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
---
### Stack Implementation using Array
```c++
#include <bits/stdc++.h>
using namespace std;

class Stack {
    int* arr;
    int top;

public:
    Stack() {
        arr = new int[100];
        top = -1;
    }

    void push(int x) {
        if (top == 99) {
            cout << "Stack Overflow!!" << endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Empty!!" << endl;
            return;
        }
        top--;
    }

    int Top() {
        if (top == -1) {
            cout << "Stack Empty!!" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty() {
        return top == -1;
    }
};

int main() {
    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.Top() << endl;  // Correct method call

    st.pop();

    cout << st.Top() << endl;

    st.pop();
    st.pop();
    st.pop();

    cout << st.empty() << endl;
}
```
---
### Queue Implemenation using Array
```c++
#include <bits/stdc++.h>
using namespace std;

#define n 100

class Queue{
    int *arr;
    int front;
    int back;

public:

    Queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x){
        if(back == n-1){
            cout << "Queue OverFlow!!";
            return;
        }
        back++;
        arr[back] = x;

        if(front == -1){
            front++;
        }
    }

    void pop(){
        if(front == -1 || front > back){
            cout << "Element in Queue are not present";
            return;
        }

        front++;
    }

    int peek(){
        if(front == -1 || front > back){
            cout << "No elements in Queue" << endl;
            return -1;
        }

        return arr[front];
    }

    bool empty(){
        if(front == -1 || front > back){
            return true;
        }
        return false;
    }
};

int main(){

    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

}
```
---
### Deque
```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq;

    dq.push_front(1);
    dq.push_front(3);

    dq.push_back(4);
    dq.push_back(5);

    for(auto i : dq){
        cout << i << " ";
    }
    cout << endl;
    
    dq.pop_back();
    dq.pop_front();

    for(auto i : dq){
        cout << i << " ";
    }
    cout << endl;

    dq.pop_back();
    dq.pop_front();

    cout << dq.empty() << endl;
}
```
---
### Sliding Window Deque
```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    deque<int> q;
    vector<int> ans;

    for (int i = 0; i < k; i++) {
        while(!q.empty() && a[q.back()] < a[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(a[q.front()]);

    for (int i = k; i < n; i++) {
        if(q.front() == i - k){
            q.pop_front();
        }

        while(!q.empty() && a[q.back()] < a[i]){
            q.pop_back();
        }
        q.push_back(i);

        ans.push_back(a[q.front()]);
    }

    for(auto i : ans){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
```
---
### Reverse a Stack
```c++
#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st, int element){
    if(st.empty()){
        st.push(element);
        return;
    }

    int topele = st.top();
    st.pop();
    insertAtBottom(st, element);

    st.push(topele);
}

void reverse(stack<int> &st){
    if(st.empty()){
        return;
    }

    int ele = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st, ele);
}

int main(){
     stack<int> st;

     st.push(1);
     st.push(2);
     st.push(3);
     st.push(4);

     reverse(st);

     while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
     }
     cout << endl;
}
```
---
### Reverse a Sentence
```c++
#include<bits/stdc++.h>
using namespace std;

void reverseString(string s){
    stack<string> st;

    for(int i = 0; i < s.length(); i++){
        string word = "";
        
        while(s[i] != ' ' && i < s.length()){
            word += s[i];
            i++;
        }
        st.push(word);
    }

    while(st.empty() != 1){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main(){
    string s = "My name is Vihan Anand";
    reverseString(s);
}
```
---
### File Operations
```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    ofstream out;
    out.open("sample.txt");
    out << "Hello I am under the water!!";
    out.close();

    string message;
    ifstream in;
    in.open("sample2.txt");

    //the problem with the line below is that it will read only one word of the file and will not include spaces nextline and even if we use getline() it will only read one line at a time and wherever it will detect a nextline it will stop there

    // in >> message;

    //eof means end of file so it will run the while loop until it reaches the end of file and will print all the lines in the file
    while (in.eof() == 0)
    {
        getline(in, message);
        cout << message << endl;
    }
    in.close();
}
```