#include<stdio.h>
int fact(int r)
{
    int mul=1;
    while(r>0)
    {
        mul=mul*r;
        r--;
    }
    return mul;
}
int main()
{
    int n,temp,sum=0,rem;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+fact(rem);
        n=n/10;
    }
    //printf("%d %d ",sum,temp);
    if(temp==sum)
    printf("The number %d is a strong number",temp);
    else
    printf("The number %d is not a strong number",temp);
}