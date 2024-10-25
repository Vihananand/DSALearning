#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

struct Node* push(struct Node* top, int val){
    if(top == NULL){
        cout << "Stack Empty!" << endl;
    }
    struct Node* n = new Node(val);
    n->data = val;
    n->next = top;
    top = n;
    return top;
}

int isEmpty(struct Node* top){
    if(top == NULL){
        return 1;
    }
    return 0;
}

int main(){
    struct Node* top = NULL;
    push(top, 78);
    return 0;
}