#include <stdio.h>

int main(){

    int a = 1;
    int l;
    printf("Enter how many numbers you want : ");
    scanf("%d", &l);
    do
    {
        printf("The number is %d\n", a);
        a++;
    } while (a <= l);
    
}