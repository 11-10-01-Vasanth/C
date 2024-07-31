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
	int arr[10][10] = {0};
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(j==1 || i==j)
			{
				arr[i][j]=1;
				printf("%d ",arr[i][j]);
			}
			else
			{  
				arr[i][j] = arr[i-1][j] + arr[i-1][j-1];                              	// i=2     	j=1     (2,1)
				printf("%d ", arr[i][j]);												// i=i-1 	j=j    	(1,1) 
			}																			// i=i-1	j=j-1	(1,0)
		}
		printf("\n");
	}	
}
