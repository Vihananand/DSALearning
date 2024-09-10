#include <stdio.h>

int main(){

    int a = 1;
    int limit;
    printf("Enter how many numbers you want : ");
    scanf("%d", &limit);
    
    while (a <= limit)
    {
        printf("The number is %d\n", a);
        a++;
    }
    
}