#include<stdio.h>
char changeCase(char ch)
{
	if(ch>=97 && ch<=122)
	{
		return ch-32;
	}
	else
	{
		return ch+32;
	}
}
int main()
{
	char ch=0;
	char ch1;
	char res;
	for(ch='a';ch<='z';ch++)
	{
		printf("%d -> %c \n ",ch,ch);
	}
	printf("\n Enter the character : ");
	scanf("%c",&ch1);
	res=changeCase(ch1);
	printf("%c\n ",res);
}
