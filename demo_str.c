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
s1.age = 18;
s1.marks = 87.88;
strcpy(s1.name, "divya");

struct student s2;
s2.age = 20;
s2.marks = 85.4;
strcpy(s2.name, "anu");

struct student s3;
s3.age = 35;
s3.marks = 90.56;
strcpy(s3.name, "darshan");

printf("name is %s\n",s3.name);
printf("age is %d\n",s3.age);
printf("marks is %f\n",s3.marks);
}
