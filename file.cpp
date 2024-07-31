#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fptr;
	char str[100];
	fptr=fopen("file.txt","r");
	fgets(str,90,fptr);
	printf("%s",str);
	
}


