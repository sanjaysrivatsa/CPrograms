#include<stdio.h>
void main(){
    int a=10, b=20;
    int  c= a + b;
    printf("%d\n", c);
    c= a++  + b;
    printf("%d\n", c);
    printf("%d", a);
    c= ++a  + b;
        printf("%d\n", c);
    a=15;
    b=20;
    printf("\n\nResult : %d", (a + b--  +  ++a + a * ++b / 5));
}