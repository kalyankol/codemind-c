#include<stdio.h>
int main()
{
    int i,n,j,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {scanf("%d",&arr[i]);
        //printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
    
            if(arr[i]>arr[i+1])
            {
                //printf("no");
                c++;//break;
            }
            else
            {
                //printf("yes");
                break;
            }
    }
    //printf("
%d",c);
    if(c==n)
    printf("yes");
    else
    printf("no");
}