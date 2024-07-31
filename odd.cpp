#include<stdio.h>
int main()
{
	int i=1;
	
	while(i<=20)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	
	printf("\n\n");
	
	int j=1;
	
	do
	{
		if(j%2!=0)
		{
			printf("%d\n",j);
		}
		j++;
	}while(j<=20);
}
