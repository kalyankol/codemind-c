#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,rem,i,arr[100],rev=0,c=0,r1,sum=0;
    scanf("%d",&n);
    temp=n;
    i=1;
    while(n>0)
    {
        rem=n%10;
        c++;
        rev=(rev*10)+rem;
        n=n/10;
    }
    while(rev>0)
    {
        r1=rev%10;
        arr[i]=r1;
        i++;
        rev=rev/10;
        
    }
    for(i=1;i<=c;i++)
    {
       sum=sum+pow(arr[i],i);
    }
    if(sum==temp)
    printf("True");
    else
    printf("False");
}