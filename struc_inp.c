//structure for name of book, author,//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
    char name[10];
    char author[10];
    int year;
};
void main ()
{
    int n;
    printf("enter number of book:");
    scanf("%d",&n);
    struct book b[n];
    for (int i = 0; i<3; i++)
    {
        printf("enter name of book:");
        scanf("%s",b[i].name);
        printf("enter author of book:");
        scanf("%s",b[i].author);
        printf("enter year of book:");
        scanf("%d",&b[i].year);
    }
    
}   