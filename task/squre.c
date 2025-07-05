//8.	Write a function int square(int num) that returns the square of a number. Call this function from main().

#include<stdio.h>
#include<conio.h>

int squre(int num)
{
	int c=num*num;
}

void main()
{
	
	int n1;
	
	printf("\n enter number :");
	scanf("%d",&n1);
	
	printf("squre is :%d",squre(n1));
	
	getch();
}
