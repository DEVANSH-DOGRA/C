#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    scanf("%s",str);
    //gets(str);
   // printf("%s",strin);
    int len=strlen(str);
   // printf("%d",len);
    for(int i=0;i<len;i++){
      if(str[i]=='1'){
      printf("One");}
     else if(str[i]=='2')
      printf("Two");
      else if(str[i]=='3')
      printf("Three");
     else if(str[i]=='4')
      printf("Four");
      else if(str[i]=='5')
      printf("Five");
     else if(str[i]=='6')
      printf("Six");
     else if(str[i]=='7')
      printf("Seven");
      else if(str[i]=='8')
      printf("Eight");
      else if(str[i]=='9')
      printf("Nine");   
      else 
      printf("none");
    }


    return 0;
}