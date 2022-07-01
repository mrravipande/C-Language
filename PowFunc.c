#include<stdio.h>
#include<math.h> //impliment math file.

int main()
{
	printf("Base of number:");
	int base;
	scanf("%d",&base);
	
	printf("Power of number:");
	int powe;
	scanf("%d",&powe);
	
	int p = pow(base, powe); //inbuild function in math file.
	
	printf("Base: %d Power: %d ans is %d",base,powe,p);
	
	return 0;
}
