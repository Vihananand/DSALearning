// You are using GCC
#include <stdio.h>
int main(){
    char name[50];
    char home[50];
    char uni[50];
    char fname[50];
    char mname[50];
    char hobbies[50];
    int reg;
    
    printf("Enter your name : ");
    scanf("%s",&name);
    
    printf("Enter reg.no : ");
    scanf("%s",&reg);
    
    printf("Enter Hometown : ");
    scanf("%s",&home);
    
    printf("Enter University name : ");
    scanf("%s",&uni);
    
    printf("Enter Father's name : ");
    scanf("%s",&fname);
    
    printf("Enter Mother's name : ");
    scanf("%s",&mname);
    
    printf("Enter Hobbies : ");
    scanf("%s",&hobbies);
    
    printf("\nName : %s\n",name);
    printf("Reg.No. : %d\n",reg);
    printf("Hometown : %s\n",home);
    printf("University Name : %s\n",uni);
    printf("Father's Name : %s\n",fname);
    printf("Mother's Name : %s\n",mname);
    printf("Hobbies : %s\n",hobbies);   
}