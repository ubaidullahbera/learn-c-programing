#include<stdio.h>
int main()
{
	int rollNo;
	char grade;
	float marks;
	printf("enter Roll Number:");
	scanf("%d",&rollNo);
	printf("Enter Marks:");
	scanf("%f",marks);
	printf("Enter grade:");
	scanf("%c",&grade);
	
	printf("\n-----student Details-----\n");
	printf("roll Number : %d\n",rollNo);
	printf("Marks  :%.2f\n",marks);
	printf("grade  :%c\n",grade);
    
    return 0;
    
}


