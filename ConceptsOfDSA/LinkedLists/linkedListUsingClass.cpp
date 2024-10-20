#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        next = NULL;
    }
}; 

//Inserting node at tail
void insertAtTail(node *&first, int val){
    node* n = new node(val);

    if(first == NULL){
        first = n;
        return;
    }

    node* temp = first;
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

//search a particular element in linked list using linear searcha
void linearsearch(node *first, int ElementToFind){
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
    cout << endl << "Min Value: " << min << endl;
};

// Selection Sort function for linked list
void selectionSort(node *first) {
    node *temp = first;

    while (temp != NULL) {
        node *minNode = temp;
        node *r = temp->next;

        // Traverse the unsorted part of the list
        while (r != NULL) {
            if (r->data < minNode->data) {
                minNode = r;
            }
            r = r->next;
        }

        // Swap the data between temp and minNode
        if (minNode != temp) {
            // swap(temp->data, minNode->data);
            int tempData = temp->data;
            temp->data = minNode->data;
            minNode->data = tempData;
        }
        temp = temp->next;
    }
}

// Function to find the middle node of a linked list
node* findMiddle(node *start, node *end) {

    if (start == NULL){
        return NULL;
    }

    node *slow = start;
    node *fast = start;

    // Using slow and fast pointers to find the middle
    while (fast != end && fast->next != end) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
};

// Binary search function in a sorted linked list
void binarysearch(node *first, int target) {
    selectionSort(first);
    node *start = first;
    node *end = NULL;

    while (start != end) {
        // Find the middle element between 'start' and 'end'
        node *mid = findMiddle(start, end);

        // If the middle element is the target, print and return
        if (mid->data == target) {
            cout << endl << "Element " << target << " found in the linked list." << endl;
            return;
        }

        // If the target is smaller than the middle element, search in the left half
        else if (target < mid->data) {
            end = mid; // Update the end to mid (search left half)
        }

        // If the target is greater, search in the right half
        else {
            start = mid->next; // Update the start to mid->next (search right half)
        }
    }

    // If we exit the loop, the element is not found
    cout << endl << "Element " << target << " not found in the linked list." << endl;
};


int main(){
    node *first = NULL;
    
    insertAtTail(first, -31);
    insertAtTail(first, 4);
    insertAtTail(first, 2);
    insertAtTail(first, 5);
    insertAtTail(first, 13);

    display(first);
    add(first);
    count(first);
    linearsearch(first, 5);
    binarysearch(first, 22);
    max(first);
    min(first);
    selectionSort(first);
    display(first);
}