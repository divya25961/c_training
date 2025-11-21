#include<stdio.h>
void prod_ref(int *a, int *b, int *c)
{
    int prod = *a * *b * *c;
    printf("%d",prod);
}
void main ()
{
    int a = 5;
    int b = 7;
    int c = 8;
    prod_ref(&a, &b, &c);
}