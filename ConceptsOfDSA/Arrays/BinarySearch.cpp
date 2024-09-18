#include <bits/stdc++.h>
using namespace std;

int binarSearch(int arr[], int size, int key){
    sort(arr, arr + size);

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int start = 0;
    int end = size;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if(arr[mid] == key){
            return mid;
        }

        else if(arr[mid] > key){
            end = mid - 1;
        }

        else{
            start = mid + 1;
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

    int found = binarSearch(arr, size, key);

    if(found == -1){
        cout << "ERROR! NOT FOUND";
    }
    else{
        cout << "Element found at " << found << endl;
    }
}