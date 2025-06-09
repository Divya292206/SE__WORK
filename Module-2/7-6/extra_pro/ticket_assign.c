//Assign ticket price based on age (child, adult, senior).

#include<stdio.h>
#include<conio.h>

void main()
{
	int age,price;
	
	printf("enter your age :");
	scanf("%d",&age);
	
	if(age<=12)
	{
		price=100;
		printf("child ticket is :%d",price);
	}
	else if(age>12 && age<40)
	{
		price=200;
		printf("senior ticket is :%d",price);
	}
	else
	{
		price=300;
		printf("adult ticket is :%d",price);
	}
	
	getch();
	
}

