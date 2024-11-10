#include<stdio.h>
void main(){
    int t=700;
    int  *p=&t;
    printf("%d\n", t);
    printf("%d", *p);
    t++;
    printf("%d\n", t);
    printf("%d", *p);
    (*p)++;
    printf("%d\n", t);
    printf("%d\n", *p);

    printf("%x\n", p);
     printf("%x\n", &t);
      printf("%x\n", &p);

}