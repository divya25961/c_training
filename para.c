#include<stdio.h>
int sum_of_squares(int x,int y)
{
    return (x*x)+(y*y);
}
int main ()
{
int x,y;
printf("enter two numbers:");
scanf("%d%d",&x,&y);
int result=sum_of_squares(x,y);
printf("x^2 + y^2 = %d\n",result);
return 0;
}
