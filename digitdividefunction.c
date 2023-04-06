#include<stdio.h>
void digitdivide(){
    int n,rem,c=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int temp=n;
    while(n!=0){
        rem=n%10;
         n=n/10;
        if(temp%rem ==0){
        c++;
        }
        else{
            continue;
        }
       
    }
    printf("%d",c);

}
int main(){
    digitdivide();
}