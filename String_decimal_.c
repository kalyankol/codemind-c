#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    char s[10000];
    scanf("%d",&t);
    //printf("%d",t);
    while(t)
    {
        int i,c=0,n;
        scanf("%s",s);
        //printf("%s",s);
        n=strlen(s);
        for(i=0;i<n;i++)
        {
           // printf("%c",s[i]);
            if(s[i]<='9' && s[i]>='0')
            c++;
        }
        //printf("%d",c);
        if(n==c)
        printf("True
");
        else
        printf("False
");
        t--;
    }
}