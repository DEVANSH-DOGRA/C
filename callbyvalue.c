#include <stdio.h>
//CALL BY VALUE--->NO CHANGE IN THE VALUES IN THE MAIN FUNCTION 
int swap(int a,int b){
    printf("x=%d y=%d before swap function\n",a,b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("x=%d y=%d inside swap function\n",a,b);
    return 0;
}
int main()
{
   int x=5,y=3;
   swap(x,y);
   printf("x=%d y=%d inside main after calling",x,y);

    return 0;
}
