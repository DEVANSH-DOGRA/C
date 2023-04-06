/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char str[100];
    int l=0,a=0,s=0,d=0;
    printf("Enter the string:\n");
    gets(str);
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    for(int i=0;i<len;i++){
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
            a++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            d++;
        }
        else {
            s++;
        }
    }
    printf("Number of Alphabets in the string is : %d\n",a);
    printf("Number of Digits in the string is : %d\n",d);
    printf("Number of Special Characters in the string is : %d\n",s);
    
    return 0;
}
