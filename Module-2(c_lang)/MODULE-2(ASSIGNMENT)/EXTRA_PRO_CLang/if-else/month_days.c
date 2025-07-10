//Accept the input month number and print number of days in that month.

#include<stdio.h>
#include<conio.h>

void main()
{
	int month;
	
	printf("\n enter your month[1 to 12] :");
	scanf("%d",&month);
	
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	{
		printf("31 days");
	}
	else if(month==4||month==6||month==9||month==11)
	{
		printf("30 days");
	}
	else if(month==2)
	{
		printf("\n the month days is 28 -29 [depends on leap year]");
	}
	else
	{
		printf("\n Ivaild enter");
	}
	
	getch();
}

