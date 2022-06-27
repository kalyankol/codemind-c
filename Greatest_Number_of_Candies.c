#include<stdio.h>
int main()
{
    int i,m,n,max=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    for(i=0;i<n;i++)
    {
        if((arr[i]+m)>=max)
        printf("True ");
        else
        printf("False ");
    }
}