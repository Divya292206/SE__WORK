//week day print

#include<stdio.h>
#include<conio.h>

void main()
{
	int week;
	
	printf("Enter week number (1-7): ");
    scanf("%d",&week);	
	
	if(week==1)
	{
		printf("\n monday");
	}
	else if(week==2)
	{
		printf("\n tuesday");
	}
	else if(week==3)
	{
		printf("\n wednesday");
	}
	else if(week==4)
	{
		printf("\n thursday");
	}
	else if(week==5)
	{
		printf("\n friday");
	}
	else if(week==6)
	{
		printf("\n saturday");
	}
	else if(week==7)
	{
		printf("\n sunday");
	}
	else
	{
		printf("\n invaild choice!");	
	}
	
	getch();
	

}
