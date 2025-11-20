#include<stdio.h>
#include<string.h>
void main ()
{
    char des [100] = " i am genious" ;
    char se [10] = "i";
    if ((strstr(des, se))!=NULL)
    printf("found");
    else
    printf("not found");
}