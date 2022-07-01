#include<stdio.h>

int sum(int n1, int n2);

int main()
{
	printf("Enter the 2 numbers:");
	int n1, n2;
	scanf("%d%d",&n1,&n2);
	
	
	printf("Sum of 2 number is: %d",sum(n1,n2));
	
	return 0;
}

int sum(int n1, int n2)
{
	int sum;
	sum = n1 + n2;
	return sum;
}
