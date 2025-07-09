//Convert years into days and months 

#include<stdio.h>
#include<conio.h>

void main()
{
	int days,month,year;
	
	printf("\n enter year:");
	scanf("%d",&year);
	
	month=year*12;
	days=year*365;
	
	printf("\n month is :%d",month);

	printf("\n days is :%d",days);	
	getch();
}
