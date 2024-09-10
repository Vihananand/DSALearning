// You are using GCC
#include<stdio.h>
int main(){
    int sal, bp;
    printf("Enter the base pay: ");
    scanf("%d", &bp);
    
    if(bp > 1000){
        sal = (2 * bp) + 1000;
    }
    else if(bp == 1000){
        sal = 2000;
    }
    else{
        sal = (4 * bp) + 500;
    }
    
    printf("\n The base pay is %d", sal);
}