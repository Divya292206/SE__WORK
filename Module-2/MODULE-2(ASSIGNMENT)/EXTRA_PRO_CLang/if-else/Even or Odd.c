//Checking Number Is Even or Odd

#include<stdio.h>
#include<conio.h>

void main()
{
	int no;
	
	printf("\n enter any number :");
	scanf("%d",&no);
	
	if(no%2==0)
	{
		printf("\n even");
	}
	else
	{
		printf("\n odd");
	}
	
	getch();
}
