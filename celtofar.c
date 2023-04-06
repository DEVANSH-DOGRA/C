#include<stdio.h>
int main(){
    float c,f;
    printf("Enter the temperature in celcius:\n");
    scanf("%f",&c);
    f=(c*(9.0/5.0))+32.0;
    printf("Temperature in farenhiet is:%f \n",f);

    return 0;
}