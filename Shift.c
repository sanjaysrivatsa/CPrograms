#include<stdio.h>
void main(){
    int  a=20;
    int b= a >> 2;
    printf("%d\n", b);
    /*
    a >> 2
    20 / 2 pow 2
    20 / 4 = 5
    */
    b=  a << 2;
    /*
        a << 2
        20  * 2 pow 2
        20 * 4 = 80
    */
    printf("%d\n" , b);
    a=50;
    b= a >> 5;
    /*
        a >> 5
        50 / 2 pow 5
        50 / 32 = 1


    */
   b= a << 5
   /*
    a << 5
    50 * 2 pow 5
    50 * 32 = 1600
   */
}