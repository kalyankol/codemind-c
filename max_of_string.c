#include<stdio.h>
#include<string.h>
int main()
{
	int i,arr[1000],c=0,k,max;
	char str[1000];
	scanf("%[^
]s",str);
	k=0;
	for(i=0;i<strlen(str);i++)
	{
		c++;
		arr[k]=str[i];
		k++;
	}
	/*for(k=0;k<c;k++)
	{
		printf("%d ",arr[k]);
	}*/
	max=arr[0];
	for(k=0;k<c;k++)
	{
		if(arr[k]>max)
		max=arr[k];
	}
	printf("%c",max);
}