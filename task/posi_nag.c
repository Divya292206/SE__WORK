//9.	Write a program to input a number and check whether it is positive, negative, or zero using if-else.

#include<stdio.h>
#include<conio.h>

void main()
{
	int no;
	
	printf("\n enter number :");
	scanf("%d",&no);
	
	if(no>0)
	{
		printf(" number is positive");
	}
	else if(no==0)
	{
		printf(" number is zero");
	}
	else
	{
		printf(" number is nagative");
	}
	
	getch();
}
