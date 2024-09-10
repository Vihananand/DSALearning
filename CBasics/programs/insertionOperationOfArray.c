#include <stdio.h>

int main() {
    int arr[10], size, item;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("\nEnter the elements of array: ");

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before inserting elemets: ");

    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter the item that you want to insert at beggining: ");
    scanf("%d", &item);

    size++;

    for(int i = size; i > 1; i--)
    {
        arr[i-1] = arr[i-2];

    }
    
    arr[0] = item;

    printf("\nArray after inserting elemet: ");

    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
