#include<stdio.h>
int main()
{
    int n,i,co=0,ce=0,ko=0,ke=0;
    scanf("%d",&n);
    int ao[n],ae[n],arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==1)
        {
            co++;
            ao[ko]=arr[i];
            ko++;
        }
        else
        {
            ce++;
            ae[ke]=arr[i];
            ke++;
        }
    }
    
    for(ke=0;ke<ce;ke++)
    printf("%d ",ae[ke]);
    for(ko=0;ko<co;ko++)
    printf("%d ",ao[ko]);
    
}