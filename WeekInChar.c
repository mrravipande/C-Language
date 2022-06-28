#include<stdio.h>

int main()
{
	printf("Enter Week wise character:\n");
	char day;
	scanf("%c",&day);
	
	switch(day)
	{
		case 'm':
			printf("monday");
			break;	
			
		case 't':
			printf("tuesday");
			break;
			
		case 'w':
			printf("wednesday");
			break;
			
		case 'T':
			printf("thursday");
			break;
			
		case 'f':
			printf("friday");
			break;
			
		case 's':
			printf("saturday");
			break;
			
		case 'S':
			printf("sunday");
			break;	
			
		default :
		printf("please select weekly.");																		
	}
	
	return 0;
}
