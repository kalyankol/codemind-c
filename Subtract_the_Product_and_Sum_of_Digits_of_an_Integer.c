#include<stdio.h>
int main()
{
    int n,r,x,prd,cal=1,sum=0,res,avg;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        x=r;
        prd=cal*x;
        cal=prd;
        res=sum+r;
        sum=res;
        avg=cal-sum;
        n=n/10;
    }
    printf("%d",avg);
    return 0;
}