#include<stdio.h>
int main(){
    
    int m=0,n,flag=0;
    printf("Enter the no. to be checked: \n");
    scanf("%d",&n);
    m=n/2;
    for(int i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            
        printf("not prime \n");
        flag=1;
        break;
        }
    }
    if(flag==0)
    printf("prime\n");
    
    return 0;
}
