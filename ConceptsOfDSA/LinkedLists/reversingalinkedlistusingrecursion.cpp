#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first = NULL;

void create(int a[], int n){
    int  i = 0;
    struct Node *t, *last;
    first = new Node;
    first -> data = a[0];
    first -> next = NULL;
    last = first;

    for(int i = 1; i < n; i++)
    {
        t = new Node;
        t -> data = a[i];
        t -> next = NULL;
        last -> next = t;
        last = t;
    }
    
}

void display(struct Node *p){
    if (p != NULL)
    {
        display(p -> next); //Using recursion to reverse a linked list
        cout << p -> data << " ";
    }
}

int main(){
    int a[] = {13, 41, 35, 77, 83};

    create(a, 5);
    display(first);

    return 0;
}