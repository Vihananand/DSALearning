#include <stdio.h>
int main(){
    int count;
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if(num % i == 0){
            count++;
        }
    }

    if(count == 2){
        printf("Prime Number");
    }
    else{
        printf("Not a prime number");
    }
    
}