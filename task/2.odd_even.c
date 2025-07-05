//2.	Write a program to check whether a number is even or odd using if-else.

#include<stdio.h>
#include<conio.h>

void main()
{
	int no;
	
	printf("\n enter number :");
	scanf("%d",&no);
	
	if(no%2==0)
	{
		printf("even number");
	}
	else
	{
		printf("odd number ");
	}
	
	getch();
}
