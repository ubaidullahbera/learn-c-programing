#include<stdio.h>
int main()
{
	   //declare variables
	   int num1,num2;
	   int sum,difference,product,quotient,remainder;
	   
       printf("enter first number:");
       scanf("%d",&num1);             //take input from user
       
       printf("enter second number:");
       scanf("%d",&num2);
       
       //perform arithmetic operation
       sum=num1+num2;
       difference=num1-num2;
       product=num1*num2;
       quotient= num1 / num2;           //integer divison
       remainder=num1%num2; //modules gives remainder
       
       //display result
       printf("\naddition=%d",sum);
       printf("\nsubtraction=%d",difference);
       printf("\nmultipication=%d",product);
       printf("\ndivision=%d",quotient);
       printf("\nmodulus=%d",remainder);
       
       return 0; //program ends successfully
   }
