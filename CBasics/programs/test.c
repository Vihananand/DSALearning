#include<stdio.h>
int main(){
    int num, digit;
    int sum = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while(num > 0){
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("The sum of the digit is %d", sum);
}