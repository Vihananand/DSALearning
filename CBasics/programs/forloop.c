#include <stdio.h>


int main(){

    //Single for loop
    for (int i = 0; i <= 10; i++)
    {
        printf("The number is %d\n", i);
    }
    
    //Double for loop
    int i, j;
    for (i = 0, j = 0; i < 10, j < 3; i++, j++)
    {
        printf("%d%d ", i, j);
    }
    //Here above is a for loop with two expressions one is for i and other is for j when both of the condition is true then only the for loop is executed if any one becomes false then the for loop will break
}