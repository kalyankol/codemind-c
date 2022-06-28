#include<stdio.h>
int main()
{
    int n,i,sum=0,rem;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        while(arr[i]>0)
        {
            rem=arr[i]%10;
            sum=sum+rem;
            arr[i]=arr[i]/10;
        }//printf("%d ",rev);
        //rev=0;
    }printf("%d",sum);
}