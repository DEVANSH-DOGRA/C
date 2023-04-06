#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d",&x);
    int res;
    res = sum(x);
    printf("The sum is: %d",res);  

    return 0;
}

int sum(int n){
    if(n>=1){
        return n + sum(n-1);
    }
    else {
        return n;
    }
}
