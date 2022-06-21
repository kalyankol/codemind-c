#include<stdio.h>
int pal(int n)
{
    int q,r=0,rem;
    q=n;
    while(n>0)
    {
        rem=n%10;
        r=r*10+rem;
        n/=10;
    }
    if(q==r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int rev(int k)
{
    int q,r=0,rem;
    q=k;
    while(k>0)
    {
        rem=k%10;
        r=r*10+rem;
        k/=10;
    }
    return r;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    while(1)
    {
        m=n+rev(n);
        if(pal(m))
        {
            printf("%d",m);
            break;
        }
        else
        {
            n=m;
        }
    }

}