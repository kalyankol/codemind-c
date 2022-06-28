#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],ch;
    int c=0,i;
    scanf("%[^
]s",str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='0' || str[i]=='1' ||str[i]=='2' ||str[i]=='3' ||str[i]=='4' ||str[i]=='5' ||str[i]=='6' ||str[i]=='7' ||str[i]=='8' ||str[i]=='9' )
        c++;
    }
    if(c>0)
    printf("Contains %d digit",c);
    else
    printf("Doesn't contain digit");
    
}