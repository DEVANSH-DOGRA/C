
#include <stdio.h>

int main()
{
    int sum=0,sumeven=0,sumodd=0;
    int arr[7]={1,2,3,4,5,6,7};
    for(int i=0;i<7;i++){
        if(i%2==0){
            sumeven=sumeven+arr[i];
        }
        else {
            sumodd=sumodd+arr[i];
        }
    }
    sum=sumeven-sumodd;
    printf("%d",sum);

    return 0;
}
