#include<stdio.h>
#include<string.h>
void main ()
{
    char name [10] = "divyashree";
    char new[100]="hello" ;
    printf("%c\n",name[5]);
    printf("length of string is %d\n",strlen(name));
    strcat(new, name);
    printf("%s", new);
}