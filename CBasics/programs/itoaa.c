#include<stdio.h>
#include<stdlib.h> 
int main(){

    int a=123;
    char str[100];

    itoa (a, str,2);

    printf("\nBinary value:%s", str); itoa(a, str, 10);
    printf("\nDecimal value:%s", str); itoa(a,str, 16);
    printf("\nHexadecimal value:%s", str); itoa(a,str,8);
    printf("\nOctal value:%s", str);

    return 0;
}