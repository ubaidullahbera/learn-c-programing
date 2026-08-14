#include<stdio.h>

int main()
{
	float celsius,fahrenheit;
	
	printf("enter tempreture in celsius:");
	scanf("%f",&celsius);
	
	fahrenheit  =(celsius*9/5)+32;
	printf("tempreture in fahrenheit=%.2f",fahrenheit);
	
	return 0;
}
