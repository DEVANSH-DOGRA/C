#include<stdio.h>
int main(){
    
    int arr[5];
    int *ptr=&arr[0];
for(int i=0;i<5;i++){
    scanf("%d",(ptr+i));

}
    for(int i=0;i<5;i++){
    printf("printing:%d\n",*(ptr+i));
    
    }
    
    return 0;
}
