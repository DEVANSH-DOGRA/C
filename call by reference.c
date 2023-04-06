#include <stdio.h>
//CALL BY REFERENCE
int swap(int *a,int *b){
    printf("x=%d y=%d before swap function\n",*a,*b);//x=5 y=3
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("x=%d y=%d inside swap function\n",*a,*b);//x=3 y=5 
    return 0;
}
int main()
{
   int x=5,y=3;
   swap(&x,&y);
   printf("x=%d y=%d inside main after calling",x,y);//x=3 y=5

    return 0;
}
