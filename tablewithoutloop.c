#include<stdio.h>
int main(){
    int i=1;
    printf("Enter a no.\n");
    int n;
    scanf("%d",&n);
    level1:    
    if(i<=10){
        printf("%dx%d=%d\n",n,i,n*i);
        i++;
        goto level1;
    }
    
    
    return 0;
}