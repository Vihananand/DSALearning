// You are using GCC
#include<stdio.h>
int main(){
    int income, tax;
    
    printf("Enter the income: ");
    scanf("%d", &income);
    
    if(income < 150000){
        tax = 0;
    }
    else if(income > 150000 && income <= 300000){
        tax = 0.10 * income;
    }
    else if(income > 300000 && income <= 500000){
        tax = 0.20 * income;
    }
    else{
        tax = 0.30 * income;
    }
    printf("Tax : %d", tax);
}