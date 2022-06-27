#include<stdio.h>
int fun(int i)
{
    if(i==0)
    return 0;
    else if(i==1)
    return 1;
    else
    return fun(i-1)+fun(i-2);
}
int main()
{
    int n,i,c,arr[100];
    scanf("%d",&n);
    for(i=0;i<25;i++)
    {
        arr[i]=fun(i);
    }
    for(i=0;i<25;i++)
    {
        if(n==arr[i])
        {
            c=1;
            break;
        }
        else
        c=0;
    }
    if(c==1)
    printf("True");
    else
    printf("False");
}