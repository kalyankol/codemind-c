#include<stdio.h>
int main()
{
    int a[100],b[100],i,c=0,k=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            c++;
        }
        if(a[i]<b[i])
        {
            k++;
        }
        if(a[i]==b[i])
        {
            c=c+0;
            k=k+0;
        }
    }
    printf("%d %d",c,k);
    
}