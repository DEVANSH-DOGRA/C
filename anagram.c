/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char str1[100],str2[100];
    printf("Enter string 1:\n");
    gets(str1);
    printf("Enter string 2:\n");
    gets(str2);
    int l1=0,l2=0,s=0;
    while(str1[l1]!='\0'){
        l1++;
    }
    while(str2[l2]!='\0'){
        l2++;
    }

for(int i=0;i<l1;i++){
    for(int j=0;j<l2;j++){
        if(str1[i]==str2[j]){
            s++;
        }
        else{}
    }
}
if(s==l1){
    printf("Anagram\n");}
    else{
    printf("Not Anagram\n");
}
    return 0;
}