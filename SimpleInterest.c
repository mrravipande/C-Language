#include<stdio.h>

int main()
{
	int PrAmount; //Principle amount
	float time, rate, simpleInter;
	
	printf("Enter Principle amount: ");
	scanf("%d",&PrAmount);
	
	printf("Enter Peroid of time: ");
	scanf("%f",&time);
	
	printf("Rate of Interest: ");
	scanf("%f",&rate);
	
	simpleInter = (PrAmount*rate*time)/100;
	
	printf("Your simple interest is: %.3f",simpleInter);
	
	printf("\nTotal is: %f",simpleInter+PrAmount);
	
	return 0;
	
}
