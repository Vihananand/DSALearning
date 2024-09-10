#include <stdio.h>

int main(){
    // label:
    //     printf("We are inside label");
    //     goto end;
    // printf("Hello World\n");
    // goto label;
    // end:
    //     printf("This is the end");

    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number. Enter 0 to exit : ");
            scanf("%d", &num);

            if (num == 0)
            {
                goto end; //when num becomes 0 the program goes to end label
            }
            
        }
        
    }
    end:
        printf("You entered 0 so you exited!");//This is the syntax of label in C programming language "(labelname):"
           
}