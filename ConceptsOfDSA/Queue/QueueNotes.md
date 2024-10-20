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