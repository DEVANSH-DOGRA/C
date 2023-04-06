#include<stdio.h>
int main(){

     char ch;
     scanf("%c",&ch);
   if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
   printf("Input is character\n");}
   else if(ch>='0' && ch<='9'){
    printf("Input is digit\n");
   }  
   else{
   printf("Input is special character\n");}
   
   return 0;
}