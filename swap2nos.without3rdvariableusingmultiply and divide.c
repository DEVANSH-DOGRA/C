#include<stdio.h>
int main(){
    int x,y;
printf("Enter 2 nos. to be swapped:\n");
scanf("%d %d",&x,&y);
x=x*y;
y=x/y;
x=x/y;
printf("The 2 nos. after swapping are: %d %d",x,y);
    
    
    return 0;
}