#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[]="Hello World";
	char str1[12];
	int i,len;
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		str1[i]=str[i]^0;
		printf("%c",str1[i]);
	}
	printf("\n");
}
