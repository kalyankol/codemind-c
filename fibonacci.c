#include<stdio.h>
int fun(int i)
{
    if(i==0)
    return 0;
    else if(i==1)
    return 1;
    else
    return fun(i-1)+fun(i-2);
}
int main()
{
    int i,n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",fun(i));
    }
}