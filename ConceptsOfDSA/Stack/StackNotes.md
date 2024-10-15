# Stack Notes

### 1. Stack is a linear data structure which is used to store list of anything but it is different from array and linked list in the way that the elements inside stack can be added and removed from one end only.
---
### 2. Operations on stack:

```c++
push(x) //To push an element on the top of stack
pop() //Removes the topmost element from stack
top() //It will target the topmost element of linked list
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