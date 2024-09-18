#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int size;
    int key;
    
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element you want to find: ";
    cin >> key;

    int found = LinearSearch(arr, size, key);

    if(found == -1){
        cout << "ELEMENT NOT FOUND!";
    }
    else{
        cout << "Element found at " << found << endl;
    }
}