/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no. of array elements:\n");
    scanf("%d",&n);
    int arr[n],ce=0,co=0;
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            ce++;
        }
        else{
            co++;
        }
        
    }
    int even[ce],odd[co];
    int in=0,on=0;
    for(int i=0;i<n;i++){
     if(arr[i]%2==0){
    even[in]=arr[i]; 
    in++;
     }
     else{
         odd[on]=arr[i];
         on++;
     }
        
    }
    printf("Even elements:\n");
    for(int i=0;i<ce;i++){
        printf("%d\n",even[i]);
    }
    printf("Odd elements\n");
for(int i=0;i<co;i++){
    printf("%d\n",odd[i]);
}
    return 0;
}
