#include <stdio.h>
int main(){
    int num, count = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    //Factors
    printf("Factors : ");
    for(int i = 1; i <= num; ++i){
        if(num % i == 0){
            printf("%d ", i);
        }
    }

    //Even Factors
    printf("\nEven Factors : ");
    for(int j = 1; j <= num; ++j){
        if(num % j == 0 && j % 2 == 0){
            printf("%d ", j);
            count++;
        }
    }
    if(count == 0){
        printf("Unavailable");
    }

    //Odd factors
    printf("\nOdd Factors : ");
    for(int k = 1; k <= num; ++k){
        if(num % k == 0 && k % 2 != 0){
            printf("%d ", k);
        }
    }
    
}