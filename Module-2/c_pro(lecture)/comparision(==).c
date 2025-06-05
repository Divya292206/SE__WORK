#include<stdio.h>
#include<conio.h>

void main()
{
	int luckynum=100,usernum;
	
	printf("enter number between 1 to 100:");
	scanf("%d",&usernum);
	
	if(luckynum == usernum)
	{
		printf("you are winner");
	}
	else
	{
		printf("you are looser");
	}
	
	getch();
}
