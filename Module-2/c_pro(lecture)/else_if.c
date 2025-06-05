#include<stdio.h>
#include<conio.h>

void main()
{
	int mark;
	
	printf("enter your marks :");
	scanf("%d",&mark);
	
	if(mark>70)
	{
		printf("A grade");
	}
	else if(mark>60)
	{
		printf("B grade");
	}
	else if(mark>50)
	{
		printf("c grade");
	}
	else if(mark>40)
	{
		printf("D grade");
	}
	else
	{
		printf("fail");
	}
	
	getch();
	
}
