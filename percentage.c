#include<stdio.h>
int main(){
    
    int a,b,c,d,e;
    printf("Enter the marks of 5 subjects:\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    double scored=a+b+c+d+e;
    double per=(scored/500)*100;
    printf("Percentage= %lf",per);
    
    return 0;
}