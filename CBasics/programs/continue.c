#include <stdio.h>

int main(){
    for (int i = 0; i < 10; i++)
    {
        printf("The number is %d\n", i);
        if (i == 6){
            continue; //Skips this particular iteration
            printf("Program has reached to 6\n");
        }
    }
    
}