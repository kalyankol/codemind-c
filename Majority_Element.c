#include<stdio.h>
int main()
{
    int i,n,j,c=0,m=0,l;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
                c+=1;
            }
        }
        if(c>m)
        {
            m=c;
            l=arr[i];
        }
    }
    printf("%d",l);
}