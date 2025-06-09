//Check if a number is within a given range (e.g., 10–50).

#include<stdio.h>
#include<conio.h>

void main()
{
	int range;
	
	printf("enter your range[10-50] :");
	scanf("%d",&range);
	
	if(range>=10 && range<=50)
	{
		printf("enter your number is in range");
	}
	else
	{
		printf("enter your number is  not in range");
	
	}
	
	getch();
	
}

