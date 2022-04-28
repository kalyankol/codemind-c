#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,sum,l,p1,p2;
    scanf("%d",&n);
    k=(log2(n));
    l=k+1;
    p1=pow(2,k);
    p2=pow(2,l);
    if(n-p1<p2-n)
    {
    	sum=n-p1;
    	printf("%d",sum);
	}
	else
	{
		sum=p2-n;
		printf("%d",sum);
	}
	
}