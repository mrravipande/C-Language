#include<stdio.h>

int main()
{
	int len, wid;
	
	printf("Enter the Length of Rectangle:\n");
	scanf("%d",&len);
	
	printf("Enter the Width of Rectangle:\n");
	scanf("%d",&wid);
	
	printf("Perimeter of Rectangle is %d",2*(len + wid));
	
	return 0;
}
