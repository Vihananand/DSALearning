#include <stdio.h>

int main(){
    struct person1
    {
        char name;
        int age;
        char home;
    }p1;

    struct person2
    {
        char name;
        int age;
        char home;
    }p2;

    printf("Enter the name for person1: ");
    scanf("%s", &p1.name);

    printf("Enter the age for person1: ");
    scanf("%d", &p1.age);

    printf("Enter the hometown for person1: ");
    scanf("%s", &p1.home);

    printf("Enter the name for person2: ");
    scanf("%s", &p2.name);

    printf("Enter the age for person2: ");
    scanf("%d", &p2.age);

    printf("Enter the hometown for person2: ");
    scanf("%s", &p2.home);

    if (p1.age >= 18)
    {
        printf("\nPerson 1 is eligible to vote.");
    } else{
        printf("\nPerson 1 is not eligible to vote.");
    }

    if (p2.age >= 18)
    {
        printf("\nPerson 2 is eligible to vote.");
    } else{
        printf("\nPerson 2 is not eligible to vote.");
    }
}