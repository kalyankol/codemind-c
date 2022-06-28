#include<stdio.h>
int main()
{
    int i;
    char str[100],c='Z';
    scanf("%[^
]s",str);
   // printf("%d",c);
    for(i=0;i<str[i]!=NULL;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }
    printf("%s",str);
}