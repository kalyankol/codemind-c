#include<stdio.h>
int main()
{ 
    int i,n,t,c=0,r,max=0,m=0,k=0; 
    scanf("%d",&n); 
    int arr[n],a[n]; 
    for(i=0;i<n;i++) 
    scanf("%d",&arr[i]); 
    for(i=0;i<n;i++) 
    { 
        c=0; 
        t=arr[i]; 
        while(t) 
        { 
            r=t%10; 
            c++; 
            t/=10; 
            
        } 
        a[k++]=c; 
        if(c>max) 
        max=c; 
        
    } 
    for(i=0;i<k;i++) 
    { 
        if(max==a[i]) 
        printf("%d ",arr[i]);
    }
}