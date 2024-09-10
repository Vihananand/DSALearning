#include <stdio.h>
int main(){
    int num, limit;
    printf("Enter the number of which you want the multipliaction table: ");
    scanf("%d" , &num);
    printf("\nEnter upto where you want to print the table: ");
    scanf("%d" , &limit);
    int i = 1;
    while(i <= limit){
        printf("%d X %d = %d", num, i, (num * i));
        i++;
    }
    return 0;
}