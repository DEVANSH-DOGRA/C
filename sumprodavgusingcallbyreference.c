#include <stdio.h>
//CALL BY REFERENCE
int sumprodavg(int a,int b,int *s,int *p,float *av){
   *s=a+b;
  // printf("Sum is :%d",s);
    *p=a*b;
   //printf("Product is :%d",p);
   *av=(float)(a+b)/2.0;
  // printf("Average is :%f",av);
    return 0;
}
int main()
{
 int x,y;
 printf("Enter values:\n");
 scanf("%d %d",&x,&y);
 int s,p;
 float av;
 sumprodavg(x,y,&s,&p,&av);
 printf("%d %d %f",s,p,av);
 //  printf("x=%d y=%d inside main after calling",x,y);

    return 0;
}
