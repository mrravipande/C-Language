#include<stdio.h>

int main()
{
	printf("Enter 3 numbers:\n");
	int n1, n2, n3;
	scanf("%d%d%d",&n1,&n2,&n3);
	
	float ave = (n1+n2+n3)/3;
	
	printf("Average 0f 3 numbers is: %f",ave);
	
	return 0;
}
