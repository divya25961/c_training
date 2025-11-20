#include<stdio.h>
void main ()
{
    int a=40;
    int*p=&a;
    printf("a value is %d\n", a);
    printf("a address is %p\n",p);
    printf("a points to %p\n",*p);
}