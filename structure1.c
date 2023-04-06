#include<stdio.h>
#include<string.h>
struct studentrecord{
 char name[20];
 char roll[10];
 int classtest;
 int midterm;
 int final;
 char grade;

};
typedef struct studentrecord sr;
int main(){
    sr record;
    strcpy(record.name,"XYZ");
    strcpy(record.roll,"ghjsd455");
    record.classtest=0;
    record.midterm=3;
    record.final=40;
    record.grade='A';
    printf("name: %s",record.name);
    
    
    return 0;
}