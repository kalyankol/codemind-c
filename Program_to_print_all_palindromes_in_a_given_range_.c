#include<stdio.h>
int pal(int n)
{
    int r=0,rem,q;
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
int main()
{
   int n,m,i;
   scanf("%d",&n);
   scanf("%d",&m);
   for(i=n;i<m;i++)
   {
       if(pal(i))
       {
           printf("%d ",i);
       }
   }
}