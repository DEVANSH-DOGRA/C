#include<stdio.h>
int main(){
    
    char g;
    printf("Enter the grade: ");
    scanf("%c",&g);
    printf("\nYou have chosen :");
    if(g=='E')
    printf("Excellent ");
    else if(g=='V')
    printf("Very Good");
    else if(g=='G')
    printf("Good");
    else if(g=='A')
    printf("Average");
    else 
    printf("Fail");
    
    return 0;
}