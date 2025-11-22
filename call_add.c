#include<stdio.h>
void sum_ref(int *a, int *b, int *c)
{
    int sum = *a+*b+*c;
    printf("%d",sum);
}
void main ()
{
    int a = 6;
    int b = 8;
    int c = 5;
    printf("call by reference:\n");
    sum_ref(&a, &b, &c);
} 