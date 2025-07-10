// Your year is leap year or not 

#include<stdio.h>
#include<conio.h>

void main()
{
	int no;
	
	printf("\n enter any number :");
	scanf("%d",&no);
	
	if(no%4==0)
	{
		printf("\n leap year");
	}
	else
	{
		printf("\n not leap year");
	}
	
	getch();
}
