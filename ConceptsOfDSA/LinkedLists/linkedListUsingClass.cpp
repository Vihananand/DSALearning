#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *next;

    node(int val){
        data = val;
        next = NULL;
    }
}; 

//Inserting node at tail
void insertAtTail(node *&head, int val){
    node *n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

//Inserting node at starting
void insertAtHead(node *&head, int val){
    node *n = new node(val);
    n->next = head;
    head = n;
}

//Deleting the first node of List
void deleteHead(node *&head){
    node *toDelete = head;
    head = head->next;

    delete toDelete;
}

//deleting a particular node with a particular value
void deletion(node *&head, int val){

    //If linked list has no nodes in it
    if(head == NULL){
        return;
    }

    //If linked list contain only 1 node that is head
    if(head->next == NULL){
        deleteHead(head);
        return;
    }

    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
}

void display(node *head){
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
}