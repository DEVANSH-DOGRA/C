#include<stdio.h>
int main(){
    int basic,ma,da,hra;
    printf("Enter the Basic Salary:\n");
    scanf("%d",&basic);
    printf("Enter the HRA Tax:\n");
    scanf("%d",&hra);
    printf("Enter the DA Tax:\n");
    scanf("%d",&da);
    printf("Enter the DA Tax:\n");
    scanf("%d",&ma);
    int gross=basic+da+hra+ma;
    printf("Gross Salary: %d",gross);
    
    return 0;
}