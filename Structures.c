#include<stdio.h>
//student is a composite datatype
struct   student{
    int  rollNo; char name[50]; int  semesterNumber;
    float   fees; char course[50];
};
struct   student  s; //s  is the variable. student is the data type. 
//s is a composite variable
void main(){
    printf("%d\t\t", s.rollNo);
    printf("%f", s.fees);
    s.rollNo=1001;  s.fees=52000.00f;
    printf("\n%d\t\t", s.rollNo);
    printf("%f", s.fees);
}