#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *next;

    node(int data){
        this->data = data;
        next = NULL;
    }
}; 

//Inserting node at tail
void insertAtTail(node *&first, int val){
    node *n = new node(val);

    if(first == NULL){
        first = n;
        return;
    }

    node *temp = first;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
};

//Inserting node at head
void insertAthead(node *&first, int val){
    node *n = new node(val);
    n->next = first;
    first = n;
};

//deleting the first node of List
void deleteHead(node *&first){
    node *toDelete = first;
    first = first->next;

    delete toDelete;
};

//deleting a particular node with a particular value
void deletion(node *&first, int val){

    //If linked list has no nodes in it
    if(first == NULL){
        return;
    }

    //If linked list contain only 1 node that is head
    if(first->next == NULL){
        deleteHead(first);
        return;
    }

    node *temp = first;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
};

//print linked list
void display(node *first){
    node *temp = first;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
};

//add all the elements of the linked list
void add(node *first){
    int sum = 0;
    node *temp = first;

    while (temp != NULL)
    {
        sum = sum + temp->data;
        temp = temp->next;
    }
    cout << "Addition: " << sum << endl;
};

//count the number of elements in the linked list
void count(node *first){
    int count = 0;
    node *temp = first;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << "Number of elements in linked list: " << count << endl;
};

//search a particular element in linked list
void search(node *first, int ElementToFind){
    node *temp = first;

    bool found = false;
    int index, i = 0; 

    while (temp != NULL)
    {   
        if (temp->data == ElementToFind){
            found = true;
            index = i;
        }
        temp = temp->next;
        i++;
    }
    if(found == true){
        cout << "Element found at " << index << " index";
    }
    else{
        cout << "Element not Found!!";
    }
};

//maximum value in linked list
void max(node *first){
    node *temp = first;
    int max = INT_MIN;

    while(temp != NULL){
        if(temp->data > max){
            max = temp->data;
        }
        temp = temp->next;
    }
    cout << endl << "Max Value: " << max;
};

//minimum value in linked list
void min(node *first){
    node *temp = first;
    int min = INT_MAX;

    while(temp != NULL){
        if(temp->data < min){
            min = temp->data;
        }
        temp = temp->next;
    }
    cout << endl << "Min Value: " << min;
};

int main(){
    node *first = NULL;
    
    insertAtTail(first, -31);
    insertAtTail(first, 2);
    insertAtTail(first, 13);
    insertAtTail(first, 4);
    insertAtTail(first, 5);

    display(first);
    add(first);
    count(first);
    search(first, 5);
    max(first);
    min(first);
}