#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 3 nos.\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
    printf("%d is max\n",a);}
    else if(b>a && b>c ){
    printf("%d is max\n",a);}
    else{
    printf("%d is max\n",c);}

    
    
    return 0;
}