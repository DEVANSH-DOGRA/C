#include<stdio.h>
int main(){
    
    int p,len,i=0;
    char str[100];
    printf("Enter the string:\n");
    gets(str);
    printf("Enter the position:\n");
    scanf("%d",&p);
    printf("Enter the length:\n");
    scanf("%d",&len);
    while(str[i]!='\0'){
        i++;
    }
        for(int j=0;j<=len;j++){
           printf("%c",str[p]);
           p++;
        }
    
    
    return 0;
}