#include<stdio.h>
int is_pali(int v)
{
    int rev=0,r,t=v;
    while(v!=0)
    {
        r=v%10;
        rev=rev*10+r;
        v/=10;
    }
    if(t==rev)
    return 1;
    else
    return 0;
}
int main()
{
    int n,r1,r2;
    scanf("%d",&n);
    int i=1,j=-1;
    while(1)
    {
        if(is_pali(n+i)==1)
        {
            r1=n+i;
            break;
        }
        i++;
    }
    while(1)
    {
        if(is_pali(n+j)==1)
        {
            r2=n+j;
            break;
        }
        j--;
    }
    if((r1-n)==(n-r2))
    printf("%d %d",r2,r1);
    else if((r1-n)>(n-r2))
    printf("%d",r2);
    else
    printf("%d",r1);
}