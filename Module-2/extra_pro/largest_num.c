//Find the largest among two numbers.

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	
	printf("enter number :");
	scanf("%d",&a);
	
	printf("enter number :");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("the largest num is %d",a);	
	}
	else if(b>a)
	{
		printf("the largest num is %d",b);
	}
	else
	{
		printf("number is equl");
	}
		
	getch();
}
