#include <stdio.h>

int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int arr1[7];
    for(int i=0;i<7;i++){
        if(i%2!=0){
        arr1[i]=arr[i]*2;
        }
        else {
            arr1[i]=arr[i]+10;
        }
    }
    for(int i=0;i<7;i++){
    printf("%d ",arr1[i]);
}
    return 0;
}
