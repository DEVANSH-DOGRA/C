#include<stdio.h>
int main(){
    int n,rem,rev,sum=0;
    printf("Enter the no.\n");
    scanf("%d",&n);
    rev=n;
    bill:
     rem=n%10;
        sum=sum+rem;
        n=n/10;
   // while(n!=0){
    if(n!=0){
       goto bill;
        
        
    }
       if (n==0){
           goto billu;
       }
       billu:
       printf("%d\n",sum);
        if(sum%5==0)
        {
        printf("Bill number %d is Eligible for gift coupon",rev);
        
    }
    else {
         printf("Bill number %d is not Eligible for gift coupon",rev);
    }
       
    //}
   // goto bill;
   
   /* billu:
    if(sum%5==0){
        
         goto billu;
    }{
        printf("Bill number %d is Eligible for gift coupon",rev);
        
    }
    else {
         printf("Bill number %d is not Eligible for gift coupon",rev);
    }
    */
    
    return 0;
}