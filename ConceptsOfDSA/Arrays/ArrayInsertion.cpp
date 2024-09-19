#include <bits/stdc++.h>
using namespace std;

void ArrayInsertion(int arr[], int size, int element, int index){
    arr[size + 1];

    for (int i = size; i > index; i--)
    {
        arr[i] = arr[i - 1]; //Shifting elemnts to right
    }
    arr[index] = element;

    cout << "New Array: ";
    for (int i = 0; i < size + 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int size, elementToInsert, indexToInsert;

    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of array with a space: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element you want to insert: ";
    cin >> elementToInsert;

    cout << "Enter the index where you want to insert: ";
    cin >> indexToInsert;  

    if (indexToInsert >= 0 && indexToInsert <= size) {
        ArrayInsertion(arr, size, elementToInsert, indexToInsert);
    } else {
        cout << "Invalid index!" << endl;
    }
}