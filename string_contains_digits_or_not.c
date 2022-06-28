#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n,i,j,c=0;
    char str[100];
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        
        
            if(str[i]>='0' && str[i]<='9')
           {
               c++;
            }
            
        
        
    }
    if(c>0)
    printf("Yes
");
    else
    printf("No
");
    }
}