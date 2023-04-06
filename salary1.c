#include<stdio.h>
int main(){
    
    printf("Enter basic salary:\n");
    double basic,hra,da,gross;
    scanf("%lf",&basic);
    if(basic<=10000.0){
        hra=20.0/100.0*(basic);
        da=80.0/100.0*(basic);
        gross=basic+da+hra;
        printf("GROSS SALARY OF EMPLOYEE=%lf",gross);

    }
    else if(basic>=10001.0 && basic<=20000.0){
        hra=25.0/100.0*(basic);
        da=90.0/100.0*(basic);
        gross=basic+da+hra;
        printf("GROSS SALARY OF EMPLOYEE=%lf",gross);
    }
    else if(basic>=20001.0){
        hra=30.0/100.0*(basic);
        da=95.0/100.0*(basic);
        gross=basic+da+hra;
        printf("GROSS SALARY OF EMPLOYEE=%lf",gross);

    }
    else{}
    return 0;
}