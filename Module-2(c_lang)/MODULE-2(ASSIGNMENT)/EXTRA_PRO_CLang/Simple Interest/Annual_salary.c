//Calculate person’s Annual salary 

#include<stdio.h>
#include<conio.h>

void main()
{
	float monthly_salary,Annual_salary;
	
	printf("\n enter your monthly salary :");
	scanf("%f",&monthly_salary);
	
	Annual_salary=monthly_salary*12;
	
	printf("\n Annual_salary is :%.2f",Annual_salary);
	
	getch();
	
}
