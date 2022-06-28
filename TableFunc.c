#include<stdio.h>

void table(int n);

int main()
{
	printf("Enter table number:");
	int num;
	scanf("%d",&num);
	table(num);
	
	return 0;
}

void table(int n)
{
	for(int i=1; i<=10; i++)
	{
		printf("%d * %d = %d",n,i,n*i);
	}
	
}
