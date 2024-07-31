	#include<stdio.h>
	#include<stdlib.h>
	
	struct student
	{	
		int age;
		char name[30];
	};
		
	int main()
	{
		struct student *s;
		int n;
		printf("Enter number : ");
		scanf("%d",&n);
		s=(struct student *) malloc(sizeof(struct student) * n);     //s=(struct student *) calloc(n,sizeof(struct student));
		int i;
		for(i=0;i<n;i++)
		{
			printf("Enter name : ");
			scanf("%s",(s+i)->name);
			printf("Enter age : ");
			scanf("%d",&(s+i)->age);
		}
		
		for(i=0;i<n;i++)
		{
			printf("Age is : %d\n",(s+i)->age);
			printf("Age is : %s\n",(s+i)->name);
		}
	}
