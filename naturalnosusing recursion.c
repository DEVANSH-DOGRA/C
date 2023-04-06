#include <stdio.h>
int  numPrint(int);
int main()
{


    int n=1,up;
    printf("Enter the no. till where you want to print natural nos.:\n");
    scanf("%d",&up);
    printf("The nos. are:\n");
    numprint(n,up);
    

    return 0;
}
int numprint(int n, int up){
    if(n<=up){
        printf("%d ",n);
        numprint(n+1,up);
    }
}
