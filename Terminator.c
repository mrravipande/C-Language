#include<stdio.h>

int main()
{
	int age;
	printf("Enter age: ");
	scanf("%d",&age);
	
	age >= 18 ? printf("You can vote") : printf("You cant vote");
	
	return 0;
}
