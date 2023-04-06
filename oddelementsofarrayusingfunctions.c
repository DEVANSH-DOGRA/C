#include <stdio.h>
int oddelementsofarray(int n,int arr[n]){
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            c++;
    }
    else{
        continue;
    }
    }
    //printf("%d odd elements",c);
    return c;
}
int main()
{
    int n;
   printf("enter total no. of elements:\n");
   scanf("%d",&n);
   int arr[n];
   printf("Enter the elements:\n");
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
printf("%d odd elements in array",oddelementsofarray(n,arr));
    return 0;
}
