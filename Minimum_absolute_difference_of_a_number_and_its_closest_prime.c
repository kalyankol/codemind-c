#include<stdio.h>
#include<math.h>
int is_prime(int l)
{
    if(l==1)
    return 0;
    for(int i=2;i<l;i++)
    {
        if(l%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int a,j,c=0,k,t1,t2;
    scanf("%d",&a);
    j=1;
    if(is_prime(a))
    {
        printf("0");
        return 0;
    }
    while(1)
    {
        if(is_prime(a+j)==1)
        {
            t1=a+j;
            break;
        }
        j++;
    }
    k=-1;
    while(a!=0)
    {
        if(is_prime(a+k)==1)
        {
            t2=a+k;
            break;
        }
        k--;
    }
    if(t1-a>=a-t2)
    printf("%d",a-t2);
    else
    printf("%d",t1-a);
    
}