#include<stdio.h>
int main(){
    
    for(int i=1;i<20;i++){
        if(i%4!=0)
        {
        printf("%d ",i);
            
        }
        else {
        continue;
            
        }
        
    }
    
    return 0;
}