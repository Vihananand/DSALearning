#include <stdio.h>
void swapByValue(int a, int b);
void swapByReference(int *a, int *b);

int main() {
    int num1, num2;

    printf("Enter two numberrs:");
    scanf("%d %d", &num1, &num2);

    printf("Original values: num1 = %d, num2 = %d\n", num1, num2);

    swapByValue(num1, num2);
    printf("After swap by value: num1 = %d, num2 = %d\n", num1, num2);

    swapByReference(&num1, &num2);
    printf("After swap by reference: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

void swapByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapByReference(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
