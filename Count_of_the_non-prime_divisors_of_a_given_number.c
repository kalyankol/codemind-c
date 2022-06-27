#include<stdio.h>
int main()
{
    int i,n,k,co=0,c=0,s=0,arr[1000],j;
    scanf("%d",&n);
    k=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            co++;
            arr[k]=i;
            k++;
        }
    }
   
    for(k=0;k<co;k++)
	{
		c=0;
		if(arr[k]==1)
		{
			c=1;
		}
		for(j=2;j<arr[k];j++)
		{
			if(arr[k]%j==0)
			{	
				c=1;
				break;
			}
		}
		if(c==0)
		{
			s++;
		}
	}
	printf("%d",co-s);
    
}