//Program to print multiplication table of a given number by the user

#include <stdio.h>

int main(){

    int num;
    printf("Enter the number of which you want the multiplication table : ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d  X  %d  =  %d\n", num, i, (num * i));
    }
    
}