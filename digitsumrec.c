#include<stdio.h>

int digitsum(int n){
if(n==0){
    return 0;

}
else {
    n=n/10;
    return (0+digitsum(n%10));
}
}




int main(){
    int n;
    scanf("%d",&n);
    int k=digitsum(n);
    printf("%d",k);
    return 0;
}