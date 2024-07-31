#include<stdio.h>
int main()
{
	int i,j;
	int a=1;
	int b=2;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
			printf("  ");
		}
		a=i;
		for(j=1;j<=i;j++)
		{
			printf("%d ",a);
			a++;
		}
		a=i;
		for(j=1;j<i;j++)
		{
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
}
