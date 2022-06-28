#include<stdio.h>

int main()
{
	printf("Enter the year:");
	int year;
	scanf("%d",&year);
	
	if(year % 2000 == 0)
	{
		printf("%d is a leepyear",year);
	}
	else if(year % 200 == 0)
	{
		printf("%d is a leepyear",year);
	}
	else if(year % 4 == 0)
	{
		printf("%d is a leepyear",year);
	}
	else
	{
		printf("%d is not leepyear",year);
	}
	
	return 0;
}
