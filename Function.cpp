#include<stdio.h>
float add(a,b)
{
	float sum=a+b;
	return sum;
}
int main()
{
	float res = add(5,5.5);
	printf("%d ",res);
}
