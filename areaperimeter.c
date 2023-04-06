#include<stdio.h>


void areaperimeter(int l,int b){
    int area =l*b;
    int p=2*(l+b);
    printf("Area is : %d\n ",area);
    printf("Perimeter is :%d ",p);

}




int main(){
    int l1,l2;
    l1=10;l2=20;
    areaperimeter(l1,l2);
        return 0;
}