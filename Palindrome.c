#include<stdio.h>
int main()
{
    int n,rem,r=0,q;
    scanf("%d",&n);
    q=n;
    while(n!=0)
    {
     rem=n%10;
     r=r*10+rem;
     n/=10;
    }
    if(r==q)
    {
       
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}