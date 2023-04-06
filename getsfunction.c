#include<stdio.h>
int main()
{
    char str[90];
    printf("Enter your full name:\n");
    gets(str);
    printf("Your name is: %s",str);
    
    
    return 0;
}