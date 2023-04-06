#include<stdio.h>
int main(){
    
    int n,temp1,temp2;
    printf("Enter array length:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++){
        //for(int j=n-i-1;j<n;j++){
            temp1=arr[i];
           // arr[i]=arr[j];
            //arr[j]=temp;
        //}
        temp2=arr[n-i-1];
        arr[i]=temp2;
        arr[n-i-1]=temp1;
    }
    printf("Reversed array:\n");
 for(int i=0;i<n;i++){
     printf("%d",arr[i]);
 }
    
    return 0;
}