//to check whether a number is negative, positive or zero.

#include<stdio.h>
#include<conio.h>

void main()
{
	int no;
	
	printf("\n enter any number :");
	scanf("%d",&no);
	
	if(no>0)
	{
		printf("\n positive");
	}
	else if(no==0)
	{
		printf("\n zero");
	}
	else
	{
		printf("\n nagative");
	}
	
	getch();
}
