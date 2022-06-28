#include<stdio.h>
int main()
{
    int a,b,arr[100],i,n,k=0,ar[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        
        if(arr[i]>=a && arr[i]<=b)
        {
            c++;
            ar[k]=arr[i];
            k++;
        }
    }
      if(c==0)
    printf("-1");
    else
    {
        for(k=0;k<c;k++)
        {
            printf("%d ",ar[k]);
        }
        
    }
  
}