#include <stdio.h>

int main()
{
    int l=0;
    char str[100];
    printf("Enter the string:\n");
    gets(str);
    //printf("%s",str);
    
    while(str[l]!='\0'){
      
        printf("%c ",str[l]); 
          l++;
    }
    //printf("Length of string is: %d",l);

    return 0;
}