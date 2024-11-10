// C Program to demonstrate the syntax of if statement
#include <stdio.h>
 int main()
{
    int gfg = 9;
    // if statement with true condition
    if (gfg < 10) {
        printf("%d is less than 10", gfg);
    }
    // if statement with false condition
    if (gfg > 20) {
        printf("%d is greater than 20", gfg);
    }
    if(gfg != gfg)
        puts("\n\nNot equals");
    else
        puts("\n\nEquals");
     return 0;
}