#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fptr;
	char fname[50];
	char text[50];
	printf("Enter the filename : ");
	scanf("%s",fname);
	fptr=fopen(fname,"w");
	printf("Enter 'quit' to exit from file");
	printf("\n");
	printf("Enter the text");
	printf("\n");
	do
	{
		scanf("%s",&text);
		fptr=fopen(fname,"a");
		fprintf(fptr,text);
	}while(!strcmp(text,"quit"));
	fclose(fptr);
}
