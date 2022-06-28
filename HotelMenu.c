#include<stdio.h>

int main()
{
	printf("Radhe Radhe Hotel\n1. Tea\n2. Coffee\n");
	int cho;
	scanf("%d",&cho);
	
	switch(cho)
	{
		case 1:
			printf("Tea Rs. 15");
			break;
			
		case 2:
			printf("Coffee Rs. 30");
			break;
			
		default:
		printf("Please choose correct one");		
	}
	
	return 0;
}
