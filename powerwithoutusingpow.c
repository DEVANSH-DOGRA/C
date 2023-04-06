#include<stdio.h>
int main(){
int a,b,c,res=1;
printf("Enter a no. and power to which it is to be raised:\n");
scanf("%d %d",&a,&b);
for(int i=0;i<b;i++){
    res*=a;
}

printf("%d raised to power %d is %d",a,b,res);

    return 0;
}