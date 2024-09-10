#include <stdio.h>

int factorial(int n) {

    if (n == 0 || n == 1) {
        return 1;
    }

    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial of negative number doesn't exist.\n");
    } 
    
    else {
        int fact = factorial(num);
        printf("Factorial of %d = %d\n", num, fact);
    }
    
    return 0;
}
