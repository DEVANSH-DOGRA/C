#include<stdio.h>
int main(){
    int n,rem,rev,sum=0;
    printf("Enter the no.\n");
    scanf("%d",&n);
    rev=n;
    bill:
   // while(n!=0){
    if(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;}
    //}
    goto bill;
    if(sum%5==0){
        printf("Bill number %d is Eligible for gift coupon",rev);
        
    }
    else {
         printf("Bill number %d is not Eligible for gift coupon",rev);
    }
    
    
    return 0;
}