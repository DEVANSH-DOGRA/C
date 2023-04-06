#include <stdio.h>

int main()
{
char str[100];
printf("Enter the string:\n");
gets(str);
int l=0,w=1;
while(str[l]!='\0'){
    if(str[l+1]==' '){
        w++;
    }
    l++;
}
printf("Total no. of words in the string is: %d",w);

    return 0;
}
