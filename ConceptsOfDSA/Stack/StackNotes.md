# Stack Notes

### 1. Stack is a linear data structure which is used to store list of anything but it is different from array and linked list in the way that the elements inside stack can be added and removed from one end only.
---
### 2. Operations on stack:

```c++
push(x) //To push an element on the top of stack
pop() //Removes the topmost element from stack
top() //It will target the topmost element of stack
empty() //It will check if the stack is empty or not and if it is not empty it will return false
```
---
### 3. Initially the top() has value of -1 which means the stack is empty and no value is present inside stack.
---
### 4. Syntax of all the functions of stack:

### 1. push(x):
```c++
void push(int x) {
//If the value of top is equal to the size of stack then no more elements can be added
        if (top == n - 1) {
            cout << "Stack Overflow!!" << endl;
            return;
        }

        top++;
        arr[top] = x;
    }
```

### 2. pop():
~~~c++
void pop() {
        if (top == -1) {
            cout << "Stack Empty!!" << endl;
            return;
        }
        top--;
    }

~~~
### 3. top():
~~~c++
int Top() {
        if (top == -1) {
            cout << "Stack Empty!!" << endl;
            return -1;
        }
        return arr[top];
    }
~~~
### 4. empty():
~~~c++
bool empty() {
        return top == -1;
    }
~~~
---
### Stack Implementation using Linked List

### 1. The head of the linked list will point to the head of stack.

```c++
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

class Stack{
    int stacksize;
    Node* head;

public:
    Stack(){
        head = NULL;
        stacksize = 0;
    }

    void push(int val){

        Node* n = new Node();
        n->data = val;
        n->next = head;
        head = n;
        stacksize++;

        cout << "Element " << val << " pushed to stack." << endl;
    }

    void pop(){
        if(head == NULL){
            cout << "Stack Empty!" << endl;
            return;
        }

        Node* n = head;

        head = n->next;
        n->next = NULL;
        delete n;
        stacksize--;

        cout << "Element " << n->data << " Popped!" << endl;
    }

    int top(){
        if(head == NULL){
            cout << "No top Element! Stack is Empty!";
            return -1;
        }
        return head->data;
    }
    
    void size(){
        cout << "Size of the stack is " << stacksize << endl;
    }

    int empty(){
        if(head == NULL){
            cout << "Stack Empty!" << endl;
            return 1;
        }
        cout << "Stack is not empty!" << endl;
        return 0;  
    }

};

int main(){
    Stack s;

    s.push(1);
    s.push(4);
    s.push(6);

    s.size();

    s.empty();

    s.pop();
    s.pop();

    return 0;
}
```
### Prefix, Infix, Postfix

### Infix: Infix follows ***\<operand> \<operator> \<operand>*** and it is good for human readability. Eg. 

### 4 * 2 + 3

### Now to solve this we follow BODMAS rule of maths. But this form is very lengthy for the computer to execute.
---
### Prefix: Prefix follows ***\<operator> \<operand> \<operand>*** and it is good for computer readibility. To convert a infix expression to postfix expression we first make brackets according to priority then we take out the operator according to brackets. Eg.

### Step 1:  
```c++
((4 * 2) + 3)
```
### Step 2:  
```c++
(*(4 2) + 3)
```
### Step 3:  
```c++
+(*(4 2) 3)
```
### Step 4:  
```c++
+ * 4 2 3 //This is the prefix expression.
```
---
### Prefix: Prefix follows ***\<operand> \<operand> \<operator>*** and it is good for computer readibility. To convert a infix expression to postfix expression we first make brackets according to priority then we take out the operator according to brackets. Eg.

### Step 1:  
```c++
((4 * 2) + 3)
```
### Step 2:  
```c++
((4 2)* + 3)
```
### Step 3:  
```c++
((4 2)* 3)+
```
### Step 4:  
```c++
4 2 * 3 + //This is the postfix expression.
```