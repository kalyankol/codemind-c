#include<stdio.h>
int main()
{
    int i,r,c,j,sum=0;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
           // printf(" %d ",arr[i][j]);
        }
        //printf("
");
    }
    //printf("
");
    for(i=0;i<c;i++)
    {
       sum=0;
        for(j=0;j<r;j++)
        {
            sum=sum+arr[j][i];
            //printf("%d ",arr[j][i]);
        }
         printf("%d ",sum);
    }
   
}