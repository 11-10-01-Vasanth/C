#include<stdio.h>
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
//		printf("%d\n ",n);
		return n*fact(n-1);
	}
}
int main()
{
	int res=fact(5);
	printf("%d",res);	
}
