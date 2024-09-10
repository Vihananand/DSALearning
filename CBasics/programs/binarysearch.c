#include <stdio.h>

int binarySearch(int arr[], int size, int element) {
    int left=0;
    int right=size-1;
    while (left <= right) {
        int mid = (right + left) / 2;


        if (arr[mid] == element)
            return mid;

        if (arr[mid] < element)
            left = mid + 1;
   
        else
            right = mid - 1;
    }

   
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element = 10;
    int result = binarySearch(arr, n-1, element);
    if (result == -1)
        printf("Element is not present in array\n");
    else
        printf("Element is present at index %d\n", result);
    return 0;
}