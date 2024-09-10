//Whern all the digits of a number are same then the number is called repunit number.
//Eg. 1111111, 22222222, 33333333, 4444444

#include <stdio.h>
int allDigitsAreSame(long long int num){

    int last_digit = num % 10; //Store the last digit of the number

    while(num > 0){
        int digit = num % 10;
        if(digit != last_digit){
            return 0; 
        }
        num /= 10;
    }
    return 1;
}

int main(){
    long long int num;
    printf("Enter the number you want to check : ");
    scanf("%lld", &num);

    if(allDigitsAreSame(num)){
        printf("The number is repunit");
    }
    else{
        printf("The number is not repunit");
    }
}

