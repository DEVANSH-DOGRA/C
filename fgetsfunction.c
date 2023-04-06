#include <stdio.h>

int main()
{
    char str[100];
    int i=0;
    printf("Enter the string:\n");
    fgets(str,sizeof str,stdin);
    while(str[i]!='\0'){
        i++;
        
    }
    printf("Length of string entered is: %d",i-1);

    return 0;
}