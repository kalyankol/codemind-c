#include<stdio.h>
int main()
{
    int n,i,j,num;
    scanf("%d",&n);
    int arr[n],ar1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        ar1[i]=arr[i]*arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ar1[i]>ar1[j])
            {
                num=ar1[i];
                ar1[i]=ar1[j];
                ar1[j]=num;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ar1[i]);
    }
}