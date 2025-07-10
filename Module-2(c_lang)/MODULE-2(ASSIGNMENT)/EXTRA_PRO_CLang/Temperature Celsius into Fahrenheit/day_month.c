// Convert Days into Months:

#include<stdio.h>
#include<conio.h>

void main()
{
	int days;
	float month;
	
	printf("\n enter days :");
	scanf("%d",&days);
	
	month=days/30.44;	//avg of 365/12
	
	printf("\n month is :%.2f",month);
	
	getch();
}
