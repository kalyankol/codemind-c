#include<stdio.h>
int main()
{
    int i,r,c,j,sum=0,a[100],c1=0,max;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int k=0;
    for(i=0;i<c;i++)
    {
       sum=0;
        for(j=0;j<r;j++)
        {
            sum=sum+arr[j][i];
        }
        c1++;
         a[k]=sum;
         k++;
    }
    max=a[0];
    for(k=0;k<c1;k++)
    {
        if(a[k]>max)
        max=a[k];
    }
    printf("%d",max);
   
}