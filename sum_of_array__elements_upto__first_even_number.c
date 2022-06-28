#include<stdio.h>
int main()
{
    int i,n,s1=0,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            k=i;
            break;
        }
    }
    for(i=0;i<k;i++)
    {
        s1=s1+arr[i];
    }
    printf("%d",s1);
}