#include<stdio.h>
void main ()
{
    int arr[5] = {8,2,3,4,5};
    int *p = arr;
    printf("%d\n", *p);
    printf("%d\n", *(p+1));
}