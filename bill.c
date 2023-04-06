#include<stdio.h>
int main(){
    
    int units,idno;
    double bill,bill1;
    char name[1000];
    printf("Enter your name \n");
    scanf("%s",&name);
    printf("Enter your customer id: \n");
    scanf("%d",&idno);
    printf("Enter the units consumed:\n");
    scanf("%d",&units);
    printf("Customer name : %s \n",name );
    printf("Customer name: %d \n",idno );
    printf("Units consumed : %d\n",units );
    if(units<=199.0)
    {
        bill=1.20*(double)units;
        if (bill>400.00){
        bill1=bill+((15.0/100.0)*bill);}
        printf("Amount charges @ Rs1.20 per unit: %lf \n",bill1 );

    }
    else if(units>=200.0 && units<400.0)
    {
        bill=1.50*(double)units;
      if (bill>400.00){
        bill1=bill+((15.0/100.0)*bill);}   
        printf("Amount charges @ Rs1.50 per unit: %lf \n",bill1);

    }
    else if(units>=400.0 && units<600.0){
        bill=1.80*(double)units;
         if (bill>400.00){
        bill1=bill+((15.0/100.0)*bill);}
      printf("Amount charges @ Rs1.80 per unit: %lf \n",bill1);
    }
    else {
        bill=2.00*(double)units;
         if (bill>400.00){
        bill1=bill+((15.0/100.0)*bill);}
      printf("Amount charges @ Rs2.00 per unit: %lf \n",bill1);
    }
    
    return 0;
}