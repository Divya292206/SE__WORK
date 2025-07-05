//7.	Write a program to reverse and print the elements of a 5-element array.

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,no[5];
	
	for(i=0;i<5;i++)
	{
		printf("\n enter number :");
		scanf("%d",&no[i]);
	}
	
	for(i=4;i>=0;i--)
	{
		printf("\n reverse number is :%d",no[i]);
	}
	
	getch();
}
