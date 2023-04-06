#include<stdio.h>
int main()
{
    int fact=1,n;
    printf("Enter the no. to find out a factorial:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;

    }
    printf("The factorial of %d is %d.",n,fact);
    
    
    return 0;
}