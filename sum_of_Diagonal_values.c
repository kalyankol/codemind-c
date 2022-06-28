#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c,i,j,s1=0,s2=0,a;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        s1=s1+arr[i][i];
        //printf("%d ",arr[i][i]);
        //printf("
");
    }
    j=r-1;
    for(i=0;i<r;i++)
    {
        //for(j=r-1;j>=0;j--)
        {
            if(i!=j)
            s2=s2+arr[i][j];
           // printf("%d ",arr[i][j]);
           j--;
        }
    }
    a=s1+s2;
    //printf("%d
",arr[r/2][c/2]);
    printf("%d",a);
    
}