#include <stdio.h>

int main(){

    int a = 5;
    float b = 10.3256;

    printf("The value of a is %d and the value of b is %3.5f \n" , a , b);
    // So if you write %x.yf(where x and y are integer values) then x becomes the no. of spaces that is to be left and y denotes upto how much deciaml palce the decimal part will be printed and if we use -x then the spaces will be left after printing the whole decimal number

    printf("Hello \nC programming \n"); // "\n" changes the line in C but if I want to print \n then I will write \\n like:
    printf("\\n is used to change the line \n");

    printf("Times Up \a\n");

    return 0;
}