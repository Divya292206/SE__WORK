/* Write a C program to input basic salary of an employee and 
calculate its Gross salary according to following: 
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90% 
Basic Salary > 20000 : HRA = 30%, DA = 95%  */


#include<stdio.h>
#include<conio.h>

void main()
{
	float B_salary,HRA,DA,G_salary;
	
	printf("\n enter your basic salary :");
	scanf("%f",&B_salary);
	
	if(B_salary<=10000)
	{
		HRA=B_salary*0.20;
		DA=B_salary*0.80;
	}
	else if(B_salary<=20000)
	{
		HRA=B_salary*0.25;
		DA=B_salary*0.90;
	}
	else
	{
		HRA=B_salary*0.30;
		DA=B_salary*0.95;
	}
	
	G_salary=B_salary+HRA+DA;
	
	printf("\n Gross salary  : %.2f",G_salary);
	
	getch();
}

