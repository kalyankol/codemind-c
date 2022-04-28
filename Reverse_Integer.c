#include<stdio.h>
int main()
{
    int n,x,r,sum=0;
    scanf("%d",&n);
    x=n;
    while(x)
    {
        r=x%10;
        sum=sum*10 + r;
        x=x/10;
        
    }
    printf("%d",sum);
    return 0;
}