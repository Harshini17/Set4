#include<stdio.h>
int main()
{
	char s[32],count=0,i;
	gets(s);
	for(i=0;s[i]!=NULL;i++)
	{
	count++;
	if(s[i]==' ')
	count--;
	}
	printf("%d",count);
	return 0;
	}
