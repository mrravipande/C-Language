#include<stdio.h>

int main()
{
	int num1, num2;
	
	printf("Enter the 2 numbers:");
	scanf("%d%d",&num1,&num2);
	
	if(num1<num2)
	{
		printf("Num1 is smallest number");
	}
	else
	{
		printf("Num2 is smallest number");
	}
	
	return 0;
}
