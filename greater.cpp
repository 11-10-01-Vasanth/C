#include<stdio.h>
int main()
{
	int x=10,y=20,z=30;
	
	// 1 method
	if(x>y && x>z)
	{
		printf("X is greater");
	}
	else if(y>x && y>z)
	{
		printf("Y is greater");
	}
	else
	{
		printf("Z is greater");
	} 
	
	printf("\n");
	// Optimized method  for 3 values
	if(x>y)
	{
		if(x>z)
		{
			printf("X is greater");
		}
		else
		{
			printf("Z is greater");
		}
	}
	else
	{
		if(y>z)
		{
			printf("Y is greater");
		}
		else
		{
			printf("Z is greater");
		}
	} 	
	
	printf("\n");
	 // Optimized method  for 4 values
	 int a=5,b=2,c=3,d=4;
	 if(a>b)
	 {
	 	if(a>c)
	 	{
	 		if(a>d)
			{
			 	printf("a is gtreater");
			}	
			else
			{
				printf("d is greater");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is greater");	
			}
			else
			{
				printf("d is greater");
			}
		}
	 }
	 else
	 {
	 	if(b>c)
	 	{
	 		if(b>d)
			{
				printf("b is greater");
			}
			else
			{
				printf("d is greater");	
			}	
		}
		else
		{
			if(c>d)
			{
				printf("c is greater");
			}
			else
			{
				printf("d is greater");
			}
		}
	 }
}




























