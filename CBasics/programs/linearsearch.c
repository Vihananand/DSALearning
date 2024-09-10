#include <stdio.h>

int main(){
    int size;
    int element, count = 0, index;

    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search: ");
    scanf("%d", &element);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            index = i;
            count++;
        }
        
    }

    if (count > 0)
    {
        printf("Element found at index %d", index);
    }

    else{
        printf("element not found");
    }
        
}