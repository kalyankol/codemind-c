#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,k=0,arr[100],sum=0;
    scanf("%[^
]s",str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            arr[k]=str[i]-48;
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}