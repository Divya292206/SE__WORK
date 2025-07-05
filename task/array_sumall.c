//6.	Write a program to input 5 numbers into an array and print the sum of all numbers
#include<stdio.h>
#include<conio.h>

void main()
{
	int no[5],i,sum=0;
	
	for(i=0;i<5;i++)
	{
		printf("\n enter number :");
		scanf("%d",&no[i]);
	}
	
	for(i=0;i<5;i++)
	{
		sum+=no[i];
	}
	
	printf("\n sum is :%d",sum);
	
	
	getch();
	
	
	
}
