//Assign bonus to employees based on years of service.

#include<stdio.h>
#include<conio.h>

void main()
{
	int years;
	
	printf("\n enter year os service :");
	scanf("%d",&years);
	
	if(years>15)
	{
		printf("\n bonus is : 10000");
	}
	else if(years>10)
	{
		printf("\n bonus is : 5000");
	}
	else if(years>5)
	{
		printf("\n bonus is : 1000");
	}
	else
	{
		printf("nothing");
	}
	
	getch();
}
