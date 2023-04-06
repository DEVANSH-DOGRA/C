#include <stdio.h>

int main()
{
    int l=0,c=0;
    char str1[100],str2[100];
    printf("Enter string1:\n");
    gets (str1);
    gets (str2);
    while(str1[l]!='\0')
    {
        if(str1[l]!=str2[l]){
            c++;
        }
        l++;
    }
    if(c==0){
        printf("Strings are equal\n");
    }
    else{
        printf("Strings are not equal\n");
    }

    return 0;
}
