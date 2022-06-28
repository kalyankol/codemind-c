#include<stdio.h>
int main()
{
    int i,n,r,c,j,s1=0,s2=0;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i%2==0)
            {
                s1=s1+arr[i][j];
            }
            else
            s2=s2+arr[i][j];
        }
    }
    printf("%d %d",s2,s1);
}