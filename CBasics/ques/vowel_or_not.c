#include<stdio.h>
#include<ctype.h>
int main(){
    char  ch;
    scanf("%c", &ch);
    char lower = toupper(ch);
    int character_code = (int)lower;
    
    int result = (character_code == 65 || character_code == 69 || character_code == 73 || character_code == 79 ||character_code == 85)?printf("Vowel"):printf("Not a vowel");
}