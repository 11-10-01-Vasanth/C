/*
Arrays
	Grouping of variables of same type under one name
	datatype var_name[size];
	datatype var_name[] = {2,4,1,2};
	datatype var_name[rows][cols] = { {},{} };
*/
//  0,0  0,1  0,2  0,3  0,4       	1
//  1,0  1,1  1,2  1,3  1,4			1 1
//  2,0  2,1  2,2  2,3  2,4			1 2 1                       
//  3,0  3,1  3,2  3,3  3,4			1 3 3 1						
//  4,0  4,1  4,2  4,3  4,4			1 4 6 4 1

#include<stdio.h>
int main()
{
	char ch[] = {'H','e','l','l','o'};
	char str[] = "hello";
	printf("%s",ch);
	printf("\n");
	int n;
	for(n=0;n<5;n++)
	{
		printf("%c ",str[n]);
	}
	printf("\n");
	
	int i,j;
	int x[3][3] = { {1,2,3}, {3,4,5}, {5,6,7}};
	int y[3][3] = { {1,2,3}, {3,4,5}, {5,6,7}};
	int res[3][3] = {};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			res[i][j]= x[i][j] * y[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
}
