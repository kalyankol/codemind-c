#include<stdio.h>
int main()
{
    int a[100],n,i,q,r,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        q=a[i];
        //printf("%d ",q);
        if(q==0)
        {
            c=c+1;
        }
        while(q!=0)
        {
            r=q%10;
            c=c+1;
            q=q/10;
        }
        printf("%d ",c);
    }
}