#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,sum=0,v;
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n-1;i++)
        {scanf("%d",&arr[i]);
            sum=sum+arr[i];
        }
        v=(n*(n+1))/2;
        printf("%d
",v-sum);
    }
}