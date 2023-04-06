#include<stdio.h>




void multiplesofseven(){
    printf("Enter the range:\n");
    int start,end;
    scanf("%d %d",&start,&end);
    for(int i=start ;i<=end;i++){
        if(i%7==0){
        printf("%d ",i);}
        else{
            continue;
        }
    }

}

int main(){
    
    multiplesofseven();
    
    
    return 0;
}