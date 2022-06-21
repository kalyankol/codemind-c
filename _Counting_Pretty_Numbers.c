#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a,b;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        int c=0;
        for(j=a;j<=b;j++)
        {
            if(j%10==2 || j%10==3 || j%10==9)
            {
                c=c+1;
                //printf("%d ",j);
            }
        }
        printf("%d
",c);
    }
    
}