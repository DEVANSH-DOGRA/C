#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("Enter a no.: \n");
    scanf("%d",&n);
    int temp=n;
    while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("Sum of digits of %d is: %d", temp,sum);
    
    
    return 0;
}