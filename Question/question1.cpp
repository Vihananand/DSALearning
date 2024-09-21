#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    int element;
    int index;

    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    cout << "Array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];    
    }

    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] == arr[j]){
                element = arr[j];
                index = j;
                for(int k = index; k < size; k++){
                    arr[k] = arr[k + 1];
                }
                size -= 1;
                arr[size];
            }
        }
    }

    cout << "New Array: ";
    for(int i = size - 1; i >= 0; i--){
        cout << arr[i] << " ";
    }
}