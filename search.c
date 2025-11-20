#include<stdio.h>
int search (int arr[], int key, int n)
{
    for (int i=0; i<n; i++)
    {
    if (arr[i]==key)
    return 1;
    }
    return 0;
}
void main ()
{
    int arr[5]= {69,36,85,78,86};
    int n = 5;
    int key;
    printf("search:");
    scanf("%d",&key);
    printf("%d",search (arr,key,n));
}