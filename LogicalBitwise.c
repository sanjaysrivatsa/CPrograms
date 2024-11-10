#include<stdio.h>
void main(){
    //Logical operators can be used only inside if, while, do-while, for and 
    //switch-case statements only.
    if(100 > 20 && 200 > 201)
        printf("Greater..");
    else
        printf("Lesser...");

    //bitwise operatos cannot be used inside if, while, do-while, for and
    //switch-case
    int  a=5 & 3;
    printf("\n%d\n", a);
    a= 5 | 3;
    printf("%d", a);
}
