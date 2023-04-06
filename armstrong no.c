#include<stdio.h>
int main(){
    
    int n,sum=0,rem,temp;
    printf("Enter the no. to be checked:\n");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    
    }
    if(temp==sum)
    printf("%d is armstrong no ",temp);
    else
    printf("%d is not armstrong",temp);
    
    return 0;
}