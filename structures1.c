#include<stdio.h>
#include<string.h>

int main(){
    
    struct student{
        char f_name[20];
        char l_name[20];
        int roll;
        char grade;

    };
    struct student s1;
    printf("Enter the first name\n");
    scanf("%s",&s1.f_name);
    strcpy(s1.l_name,"Dogra");
    printf("Enter roll number:\n");
    scanf("%d",&s1.roll);
    printf("%s",s1.f_name);
    printf(" %s \n",s1.l_name);
    printf("%d\n",s1.roll);
    //s1.grade='A';
    scanf("%c",&s1.grade);
    printf("Your grade is:");
    printf("%c",s1.grade);

    
    
    return 0;
}