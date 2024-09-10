#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int element = 7;
    
    printf("Array before insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[0] = element;
    
    printf("Array after insertion: ");
    for (int i = 0; i < size+1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
