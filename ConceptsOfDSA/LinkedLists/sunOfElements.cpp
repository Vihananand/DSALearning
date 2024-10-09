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
    while (p != NULL)
    {
        cout << p -> data << "->";
        p = p-> next;
    }
    cout << "NULL";
}

void sum(struct Node *p){
    int sum = 0;
    while (p != NULL)
    {
        sum = sum + p -> data;
        p = p -> next;
    }
    cout << endl << "Sum: " << sum;
}

int Rsum(struct Node *p){
    if(p != NULL){
        return Rsum(p -> next) + p -> data;
    }
    else{
        return 0;
    }
}

int main(){
    int a[] = {3, 4, 5, 7, 8};

    create(a, 5);
    display(first);
    sum(first);
    cout << endl << "Sum: " << Rsum(first);

    return 0;
}