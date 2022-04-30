#include<stdio.h>
int main()
{
    int l,r,k,n,c=0;
    scanf("%d%d%d",&l,&r,&k);
    for(n=l;n<=r;n++)
    {
        if(n%k==0)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}