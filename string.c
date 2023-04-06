/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
int main()
{
    printf("Enter the string:\n");
    char str[100];
    int i=0,j=0,s,len;
    gets(str);
    printf("Enter the position to start extraction :\n");
    scanf("%d",&s);
    printf("Enter the length of substring :\n");
    scanf("%d",&len);
    char subst[len];
    // for(int i=s;i<=len;i++)
    i=s;
    while(len!=0)
    {
        subst[j]=str[i];
        i++;
        j++;
        len--;
       
    }
    subst[j]='\0';
    printf("%s",subst);
    //printf("The no. of vowels are:%d \n The no. of consonants are:%d\n",v,c);
    return 0;
}
