#include<stdio.h>
int voc(int l,int b,int h)
{
    int prod=l*b*h;
    return prod;
}
void main()
{
    int l=2;
    int b=3;
    int h=4;
    printf("%d",voc(l,b,h));
}