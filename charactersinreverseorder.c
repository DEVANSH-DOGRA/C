#include <stdio.h>

int main()
{
    int l=0;
    char str[100];
    printf("Enter the string:\n");
    gets(str);
    //printf("%s",str);
    
    while(str[l]!='\0'){
      l++;
    }
    while(l!=0)
    {
    printf("%c ",str[l-1]);
    l--;
    }
    //printf("Length of string is: %d",l);

    return 0;
}