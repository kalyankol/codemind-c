#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int c1=0,c2=0,i;
    scanf("%[^
]s",str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='z')
        c1++;
        if(str[i]=='o')
        c2++;
    }
    if(c1*2==c2)
    printf("Yes");
    else
    printf("No");
}