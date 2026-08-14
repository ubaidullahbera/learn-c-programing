#include<stdio.h>

int main()
{

float principal,rate,time,simpleinterest;

printf("enter principal amount:");
scanf("%f", &principal);

printf("enter rate of intrest:");
scanf("%f",&rate);

printf("enter time(years):");
scanf("%f",&time);

simpleinterest=(principal*rate*time)/100;

printf("simple intrest=%.2f",simpleinterest);

return 0;
}
