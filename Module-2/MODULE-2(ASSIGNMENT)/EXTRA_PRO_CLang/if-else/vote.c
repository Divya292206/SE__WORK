//Checking Whether You Are Eligible for Voting or Not

#include<stdio.h>
#include<conio.h>

void main()
{
	int age;
	
	printf("\n enter your age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\n you will be Eligible to vote");
	}
	else
	{
		printf("\n Not Eligible vote");
	}
	
	getch();
}
