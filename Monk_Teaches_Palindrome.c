#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[105];
        int i,j,n,c=0;
        scanf("%s",s);
        n=strlen(s);
        for(i=0,j=n-1;i<n/2;i++,j--)
        {
            //printf("%c %c",s[i],s[j]);
            if(s[i]==s[j])
            c++;
        }
        if(c==n/2)
        {
            if(n%2==0)
            printf("YES EVEN
");
            else
            printf("YES ODD
");
        }
        else
        printf("NO
");
    }
}