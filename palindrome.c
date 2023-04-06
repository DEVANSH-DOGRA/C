#include<stdio.h>
int main(){

int n,rev=0,rem,temp;
printf("Enter the no. to be checked : \n");
scanf("%d",&n);
temp=n;
while(n!=0){
    rem=n%10;
    rev=(rev*10)+rem;
    n=n/10;

}
if(temp==rev)
printf("%d is a palindrome no.\n", temp);
else
printf("%d is not a palindrome no. \n",temp);

return 0;
}