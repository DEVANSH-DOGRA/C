#include<stdio.h>
void swap(int *a,int *b){
    int n;
    n=*a;
    *a=*b;
    *b=n;
}
int main(){
    int a,b,n;
    printf("Enter two nos.:\n");
    scanf("%d %d",&a,&b);
/*int *ap=&a, *bp=&b;
int *bp;
ap=&a;
bp=&b;
n=*ap;
*ap=*bp;
*bp=n;*/
swap(&a,&b);
printf("AFTER SWAPPING: %d %d",a,b);
    
    return 0;
}