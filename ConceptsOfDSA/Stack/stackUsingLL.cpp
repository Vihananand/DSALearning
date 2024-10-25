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
    s.push(9);
    s.push(11);

    s.size();

    s.empty();

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    return 0;
}