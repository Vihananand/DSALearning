#include <stdio.h>

float farenheit_to_celcius(float farenhiet){
    return (farenhiet - 32) * 0.56;
}
float celcius_to_farenhiet(float celcius){
    return (celcius * 1.8) + 32;
}

int main(){
    int choice;
    printf("WELCOME TO TEMPRATURE CONVERTER");
    printf("\n-------------------------------");
    printf("\n1. Celcius to Farenhiet");
    printf("\n2. Farenhiet to Celcius");
    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        float celcius;
        printf("Enter the temprature in celcius : ");
        scanf("%f", &celcius);
        printf("Temprature in Farenheit: %.2f",celcius_to_farenhiet(celcius));
        break;

    case 2:
        float farenhiet;
        printf("Enter the temprature in farenhiet : ");
        scanf("%f", &farenhiet);
        printf("Temprature in Celcius: %.2f",farenheit_to_celcius(farenhiet));
        break;
    
    default:
        printf("\nWRONG CHOICE!!!!!");
        break;
    }
}