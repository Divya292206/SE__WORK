#include<stdio.h>
#include<conio.h>

void main()
{
	int luckynum=25,usernum;
	
	printf("enter 1 to 100 number:");
	scanf("%d",&usernum);
	
	printf("\n your lucky number is %d",luckynum);
	luckynum=usernum;
	printf("\n your lucky number is %d",luckynum);
	
	getch();

	
}
