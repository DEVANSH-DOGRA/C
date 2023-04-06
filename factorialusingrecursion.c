/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d",&x);
    int res;
    res = fact(x);
    printf("The factorial is: %d",res);  

    return 0;
}

int fact(int n){
    if(n>0){
        return n * fact(n-1);
    }
    else {
        return 1;
    }
}
