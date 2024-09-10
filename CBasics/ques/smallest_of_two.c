#include <stdio.h>

void smalles_of_two(int a, int b){
    if(a < b){
        printf("%d is smaller.", a);
    }
    else{
        printf("%d is smaller.", b);
    }
}

int main(){
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    smalles_of_two(a , b);
}
