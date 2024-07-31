#include<stdio.h>
int main()
{
	int a[] = {1,2,3};
	int i;
	int j;
	int k;
	for(i=0;i<3;i++)
	{
		printf("%d ",(*a+i));	
	}
	
	printf("\n");
	
	int b[3][3] = {{0,1,2},{3,4,5},{6,7,8}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",*(*(b+i)+j));
		}
		printf("\n");
	}

	printf("\n");
	
	int c[3][3][3] =	{
							{ {1,2,3},{1,2,3},{1,2,3} },
							{ {1,2,3},{1,2,3},{1,2,3} },
							{ {1,2,3},{1,2,3},{1,2,3} }
						};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",  *(*(*(c+i)+j)+k));
			}
			printf("\t");
		}
		printf("\n");
	}
}
