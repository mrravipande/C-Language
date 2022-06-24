#include<stdio.h>

int main()
{
	int marks;
	printf("Enter the marks:");
	scanf("%d",&marks);
	
	if(marks >= 0 && marks <= 34)
	{
		printf("Fail");
	}
	else if(marks >= 35 && marks <= 60)
	{
		printf("Pass");
	}
	else if(marks >= 60 && marks <= 80)
	{
		printf("A+");
	}
	else if(marks <= 80 && marks >= 100)
	{
		printf("A++");
	}
	else
	{
		printf("Please enter 0 to 100");
	}
	
	return 0;
}
