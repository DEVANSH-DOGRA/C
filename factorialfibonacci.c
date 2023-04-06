#include <stdio.h>

int main()
{
int fact=1,n;
printf("Enter the no.:\n");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    fact=fact*i;
}
printf("Factorial=%d\n",fact);
int a=0,b=1,c;
for(int i=2;i<fact;i++){
    c=a+b;
      a=b;
    b=c;
}
printf("ans=%d",c);

    return 0;
}
