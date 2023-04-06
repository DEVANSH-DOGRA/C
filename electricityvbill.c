#include<stdio.h>
int main(){
    double i,f,bill;
    printf("Enter the initial and final readings:\n");
    scanf("%lf %lf",&i,&f);
    double r=f-i;
    if(r<100.00){
        bill=1.50*r;
        printf("Total bill for %lf readings is: %lf",r,bill);
    }
    else if(r>=100.00 && r<200.00){
        bill=2.50*r;
         printf("Total bill for %lf readings is: %lf",r,bill);
    }
    else if(r>=200.00 && r<500.00){
        bill=3.50*r;
         printf("Total bill for %lf readings is: %lf",r,bill);
            }
            else{
                bill=5.50*r;
                 printf("Total bill for %lf readings is: %lf",r,bill);
            }
    
    
    return 0;
}