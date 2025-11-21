#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[10];
    int age;
    float marks;
};
void main ()
{
    struct student s1;
    struct student *p = &s1;
    strcpy(p->name,"akshaya");
    p->age = 67;
    p->marks = 89.2;
    printf("%d\n",p->age);
    printf("%f\n",p->marks);
    printf("%s\n",p->name);
}