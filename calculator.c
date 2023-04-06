#include<stdio.h>
int main(){
    
    int a,b,ch;
    printf("Enter 2 nos.\n");
    scanf("%d %d",&a,&b);
    printf("Enter your choice \n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("%d", a+b);
        break;
        case 2:
        if(a>b)
        printf("%d",a-b);
        else
        printf("%d",b-a);
        break;
        case 3:
        printf("%d",a*b);
        break;
        case 4:
        if(a>b)
        printf("%d",a/b);
        else
        printf("%d",b/a);
        break;
        default:
        printf("Invalid choice");
        
    }
    
    
    return 0;
}