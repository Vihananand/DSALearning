#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter a: ");
    scanf("%d", &a);
    
    printf("Enter b: ");
    scanf("%d", &b);

    if (a > b) {
        printf("a is greater");
    }
    else if (a < b){
        printf("b is greater");
    }
    else if (a == b){
        printf("a and b are equal");
    }

    return 0;
}
