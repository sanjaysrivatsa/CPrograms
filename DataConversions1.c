#include<stdio.h>
void main(){
    int  i=100, j=2, c= i /2;
    //3.4 is double by default. In C language, fractional values are considered as 
    //double by default.
    float f=3.4;//3.4 is taken as double, but automatically converted to float.
    float  t=5.4f; //5.4 must taken as a floating point value.
    float  o=100.00F; printf("%.2f", (o / j));
    printf("Variables in C");
    if(i >200){
        while ( o < 20000){
            o=o+10;
        }
    }
    //break;



    int  n=(int)f; //Narrowing conversion. Data loss. Casting is optional.
    printf("\n%d\n", n);for (f=1.0 ; f < 10.0; f++)
        printf("%f", f);
    //Casting. (<data-type>). In C language casting is optional.
    int  n1=100;  float  f1=(float)n1; //Widening conversion. No data loss.
    printf("%f\n", f1);

}