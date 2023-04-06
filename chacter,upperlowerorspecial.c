#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("%c is UPPERCASE\n",ch);
    }
    else if(ch>='a' && ch<='z'){
        printf("%c is lowercase\n",ch);
    }
    else {
        printf("%c is a special character",ch);
    }
    
    return 0;
}