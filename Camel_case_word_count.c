#include<stdio.h>
int main()
{
    int i,c=0;
    char str[100];
    scanf("%[^
]s",str);
    for(i=1;i<str[i]!=NULL;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        c++;
    }
    printf("%d",c+1);
}