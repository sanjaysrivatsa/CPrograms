#include<stdio.h>
//function definition
void sum(int n1,  int n2)
{
    int  c=n1 + n2;
    printf("%d\n", c);
    n1++; n2++;
    sum(n1, n2);
}
void main(){
    int a=100, b=200;
    for(register int i=0;i <100000; i++)
        printf("%d", i);
    sum(a, b); //function call
    printf("2 numbers added....");
}
