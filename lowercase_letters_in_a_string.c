#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,c=0,s=0;
    char str[10000];
    scanf("%[^
]s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]>=97 && str[i]<=122 )
        {
            c++;
            //printf("%c",str[i]); 
        }
    }
    printf("%d",c);
}