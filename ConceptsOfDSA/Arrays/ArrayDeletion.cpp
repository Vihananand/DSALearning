#include <bits/stdc++.h>
using namespace std;

void ArrayDeletion(int arr[], int size, int element){
    bool found;
    int elementtoDelete;
    int index;

    //Searching for element
    for (int i = 0; i < size; i++)
    {
        if(element == arr[i]){
            found = true;
            elementtoDelete = arr[i];
            index = i;
        }
        else{
            found == false;
        }
    }

    //If element found then deleting it
    if(found == true){
        for (int i = index; i < size; i++)
        {
            arr[i] = arr[i + 1]; //Shifting elements to left in array to remove the element found
        }

        cout << "New Array: ";
        for (int i = 0; i < size - 1; i++)
        {
            cout << arr[i] << " ";
        }  
    }
    else{
        cout << "Element not found in array!!";
    }
    
}

int main(){
    int size, elementToDelete;

    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of array with a space: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element you want to delete: ";
    cin >> elementToDelete;

    ArrayDeletion(arr, size, elementToDelete);
}