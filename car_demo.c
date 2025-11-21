#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct car
{
    char name[10];
    float speed;
    int price;
};
void main ()
{
    int n;
    printf("enter number of car:");
    scanf("%d",&n);
    struct car c[n];
    for(int i = 0; i<n; i++)
    {
        printf("enter name of car:");
        scanf("%s",c[i].name);
        printf("enter speed of car:");
        scanf("%f",&c[i].speed);
        printf("enter price of car:");
        scanf("%d",&c[i].price);
    }
    printf("your information:\n");
    for(int i=0; i<n; i++)
    {
        printf("%s\n",c[i].name);
        printf("%f\n",c[i].speed);
        printf("%d\n",c[i].price);
    }
}