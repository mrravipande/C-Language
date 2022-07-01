#include<stdio.h>

int main()
{
	printf("Enter temperature:");
	int tem;
	scanf("%d",&tem);
	
	if(tem>30)
	{
		printf("HOT");
	}
	else if(tem<22)
	{
		printf("COLD");
	}
	else
	{
		printf("Normal");
	}
	
	return 0;
}
