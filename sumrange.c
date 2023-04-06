#include<stdio.h>
int  sumrange(){
    int a,b,sum=0;
    printf("Enter the range: \n");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        sum=sum+i;

    }
return sum;
   // printf("The sum b/w the range [%d %d] is %d :",a,b,sum);
}
int main(){
int x=sumrange();
printf("%d",x);
}