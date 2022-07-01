#include<stdio.h>

int sqr(int n);

int main()
{
	printf("Enter the number:");
	int num;
	scanf("%d",&num);
	
	printf("Square root is %d",sqr(num));
	
	return 0;
}

int sqr(int n)
{
	int ans;
	ans = n * n;
	return ans;
}
