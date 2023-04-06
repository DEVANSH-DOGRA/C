#include<stdio.h>
#include<ctype.h>
int main(){
    
    char ch;
   
    printf("Enter a character:\n");
    scanf("%c",&ch);
     char temp=ch;  
    if(islower(ch)){
        ch=toupper(ch);
        printf("Reversed case of %c is %c", temp,ch);
            }
    else {
        ch=tolower(ch);
        printf("Reversed case of %c is %c", temp,ch);
    }
    
    return 0;
}