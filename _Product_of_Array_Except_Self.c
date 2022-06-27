#include<stdio.h>
int main()
{
    int i,j,n,mul=1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        mul=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            mul=mul*arr[j];
        }
        printf("%d ",mul);
    }
}