//5.	Write a program to calculate the factorial of a number using a while loop

#include<stdio.h>
#include<conio.h>

void main()
{
	int no,i=1,fact=1;
	
	printf("\n enter number :");
	scanf("%d",&no);
	
	while(i<=no)
	{
		fact=fact*i;
		i++;
	}
	
	printf("\n factorial is :%d",fact);
}
