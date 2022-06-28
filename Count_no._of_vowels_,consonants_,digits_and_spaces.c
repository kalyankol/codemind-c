#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int v=0,c=0,d=0,w=0,i,n;
    scanf("%[^
]s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
        str[i]=='A' ||str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            v++;
        }
        if(str[i]>='0' && str[i]<='9')
        {
            d++;
        }
        if(str[i]==' ')
        {
            w++;
        }
    }
    c=n-(v+d+w);
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",v,c,d,w);
}