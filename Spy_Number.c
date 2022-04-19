#include<stdio.h>
int main()
{
    int n,q,r,sum=0,prd=1;
    scanf("%d",&n);
    q=n;
    while(q)
    {
        r=q%10;
        sum=sum+r;
        prd=prd*r;
        q=q/10;
    }
    if(sum==prd)
    {
      printf("Spy Number");  
    }
    else
    {
        printf("Not Spy Number");
    }
}