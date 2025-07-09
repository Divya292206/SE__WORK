//Simple Interest 

#include<stdio.h>
#include<conio.h>

void main()
{
	float salary,premium;
	
	printf("\n enter your salary :");
	scanf("%f",&salary);
	
	if(salary<10000)
	{
		premium=salary*0.05;
	}
	else if(salary<25000)
	{
		premium=salary*0.10;
	}
	else
	{
		premium=salary*0.15;
	}
	
	printf("\n Your insurance premium is: %f",premium);

	getch();
}
