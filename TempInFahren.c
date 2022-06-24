#include<stdio.h>

int main()
{
	
	int temp, fahren;
	
	printf("Enter temperature: ");
	scanf("%d",&temp);
	
	fahren = temp*(9/5)+32;
	
	printf("Fahrenheit is %d",fahren);
	
	return 0;
}
