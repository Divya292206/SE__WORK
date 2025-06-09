//check whether a year is a leap year

#include<stdio.h>
#include<conio.h>

void main()
{
	int year;
	
	printf("enter years :");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("leap years");
	}
	else
	{
		printf("not lear years");
	}
	
	getch();
}
