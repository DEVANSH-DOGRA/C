#include<stdio.h>
int main(){
    int flag=0,x,y;
    printf("Enter starting value:\n");
    scanf("%d",&x);
    printf("Enter ending value:\n");
    scanf("%d",&y);
    if(x>y || x==y){
        printf("0\n");
    }
    else{
        while(x<y){
            flag=0;
            for(int i=2;i<x/2;i++){
                if(x%i==0){
                flag=1;
                break;
                }
            
            }
            if(flag==0){
                printf("%d",x);
                x++;
            }
        }
    }
    
    
    return 0;
}