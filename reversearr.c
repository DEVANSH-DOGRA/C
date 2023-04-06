#include <stdio.h>

int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    //int brr[7];
   int i=0,j=6,temp;
   while(i<j){
       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
       i++;
       j--;
   }
   for(int i=0;i<=6;i++){
    printf("%d",arr[i]);
    }

    return 0;
}
