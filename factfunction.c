#include<stdio.h>
void factorial(){
    int n,fact=1;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)   //OR for(int i=n;i>=1;i--)
    {    
        fact=fact*i;
    }
    printf("The factorial of %d is: %d",n,fact);
}
int main(){
    factorial();
}