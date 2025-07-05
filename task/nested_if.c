//3.	Write a program to find the maximum of three numbers using nested if-else.

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	printf("\n enter three number :");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\n a is grater");
		}
		else
		{
			printf("\n c is grater");
		}
	}
	else 
	{
		if(b>c)
		{
			printf("\n b is grater ");
		}
		else
		{
			printf("\n c is grater");
		}
	}
	
	getch();
}
