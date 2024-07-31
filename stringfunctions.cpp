#include<stdio.h>
#include<string.h>
int main()
{
	char str[30]="Vas";
	char str1[30]="Kumar";
//	str="Vas";   Not allowed
	strcpy(str,"Vasantha");
	printf("%s\n",strcat(str,str1));
	printf("%d\n",strlen(str1));
		
	char name[10];
	char name1[10];	
	strcpy(name,"me");
	strcpy(name1,"me");
	printf("%d\n",strcmp(name,name1));
}
