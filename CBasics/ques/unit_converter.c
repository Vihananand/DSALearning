/*
Unit Conversion : 

1. Kilometers to Miles
2. Celcius to Fahrenheit
3. Kgs to Pounds
4. Inches to metres
5. Foot to Inches

*/

#include <stdio.h>

int main() {

    float km;
    float c;
    float kgs;
    float inches;
    float foot;
    float miles;
    float far;
    float pounds;
    float metres;
    int choice;

    printf("Unit Conversion : \n");
    printf("1. Kilometers to Miles \n");
    printf("2. Celsius to Fahrenheit \n");
    printf("3. Kgs to Pounds \n");
    printf("4. Inches to Metres \n");
    printf("5. Foot to inches \n");

    printf("Enter the number of conversion you want : ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the value in kilometers : ");
        scanf("%f", &km);
        miles = km * 0.62;
        printf("The value in miles : %f", miles);
    }
    else if (choice == 2) { 
        printf("Enter the value in Celsius : "); 
        scanf("%f", &c); 
        far = (c * 1.8) + 32;
        printf("The value in Fahrenheit : %f", far); 
    }
    else if (choice == 3) {
        printf("Enter the value in kilograms : ");
        scanf("%f", &kgs); 
        pounds = kgs * 2.20462;
        printf("The value in pounds : %f", pounds); 
    }
    else if (choice == 4) {
        printf("Enter the value in inches : ");
        scanf("%f", &inches);
        metres = inches / 39.37; 
        printf("The value in meters : %f", metres);
    }
    else if (choice == 5) {
        printf("Enter the value in feet : "); 
        scanf("%f", &foot);
        inches = foot * 12;
        printf("The value in inches : %f", inches);
    }

    return 0; 
}
