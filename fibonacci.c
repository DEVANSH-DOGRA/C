#include<stdio.h>
int main(){
    
    int a=0,b=1,c;
    printf("Enter a no.:\n");
    int n;
    scanf("%d",&n);
    printf("%d ",a);
    printf("%d ",b);
    for(int i=2;i<n;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    
    
    
    return 0;
}