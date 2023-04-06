#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the 2 nos.:\n");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("The 2 nos. after swapping are: %d %d",x,y);
    
    
    
    return 0;

}