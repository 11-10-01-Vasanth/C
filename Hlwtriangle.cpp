#include<stdio.h>
int main()
{
	int i,j;
	int n=5;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(i==j || j==1 || i==n)
			{
				printf("* ");
			}
			else
			{
				printf("( ");
			}
		}
		printf("\n");
	}
}
