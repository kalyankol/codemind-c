#include<stdio.h>
int prime(int k)
{
    int i,c=0;
    for(i=2;i<k;i++)
    {
        if(k%i==0)
        {
            c=c+1;
        }
    }
    if(c==0)
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
   int n,i,j,a=0,b=0;
   scanf("%d",&n);
   for(i=2;i<n;i++)
   {
       for(j=2;j<n;j++)
       {
           if(i*j==n)
           {
               if(prime(i) && prime(j))
               {
                   a=i;
                   b=j;
                   break;
               }
           }
       }
   }
   if(a==0 && b==0)
   {
       printf("-1");
   }
   else
   {
       printf("%d %d",b,a);
   }
}





