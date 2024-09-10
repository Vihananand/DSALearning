#include <stdio.h>

//Function to return the sum of two numbers
int sum(int a, int b){ //This function returns the value of a + b

     return a + b;
}

float area(float r){
    const float pi = 3.14;
    float area  = pi * r * r;
    return area;
}

//Function to print a star pattern
void printstar(int rows){ //This is a void function it means it does not return anything 

    int i, j;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

//Function to subtract one value from other
void subtract(){ //This is the function that doesn't have arguments and also doesn't have any return value

    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    printf("The subtracted value is : %d", (a - b));
}

int main(){ //This is the main function the program starts from here only whenever you run the program doesn't matter even if there are 100 functions declared before it the program will always search for main function to be executed first so all the functions that are declared seperately are to be called in the main function to run.

    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("The sum is : %d\n", sum(a , b));

    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    printstar(rows);

    subtract();

    float radius;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    printf("The area of circle is %.2f", area(radius));
}
