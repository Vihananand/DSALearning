#include <stdio.h>

int main(){
    for (int i = 0; i < 10; i++)
    {
        printf("The number is %d\n", i);
        if (i == 6){
            printf("Program has reached to 6\n");
            break; //Comes out of the loop when i becomes 6
        }
    }
    
}