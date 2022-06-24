#include<stdio.h>

int main()
{
	char ch;
	printf("Enter Character:");
	scanf("%c",&ch);
	
	if(ch >= 'a' && ch <= 'z')
	{
		printf("Character is lower case");
	}
	else if(ch >= 'A' && ch <= 'Z')
	{
		printf("Character is Upper case");
	}
	else
	{
		printf("Its not a character");
	}
	return 0;
}
