#include<stdio.h>
int main(){
    
    
    int n,rev=0,rem,temp;
    printf("Enter  the no. to be reversed:\n");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    printf("The reversed form of %d is: %d",temp,rev);
    return 0;
}