#include<stdio.h>
void evenodd(int n){
    if(n%2==0)
    printf("%d is even \n", n);
    else
     printf("%d is odd \n", n);

}




int main(){
    printf("Enter the no.:\n");
    int x;
    scanf("%d",&x);
    evenodd(x);
    return 0;
}