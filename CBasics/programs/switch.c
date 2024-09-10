#include <stdio.h>

int main(){
    
    int grade;
    printf("Enter you grade: ");
    scanf("%c", &grade);

    switch(grade)
    {
    case 'a':
        printf("You need to work hard!!");
        break;

    case 'b':
        printf("Keep improving!");
        break;

    case 'c':
        printf("Good!But can be improved");
        break;

    case 'd':
        printf("Nice Work! Try to get 5 in the next year");
        break;

    case 'e':
        printf("Excellent! No room for improvements");
        break;

    default:
        printf("You have enter wrong CGPA enter the right CGPA");
        break;

    // You need to apply break after each of the case statement because if you don't apply break statement the cases that are below will also be executed
    
    }

}
