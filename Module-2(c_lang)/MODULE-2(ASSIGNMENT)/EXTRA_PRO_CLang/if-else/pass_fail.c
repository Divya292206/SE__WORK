//Accept marks from user and check pass or fail 

#include<stdio.h>
#include<conio.h>

void main()
{
	int mark;
	
	printf("\n enter mark:");
	scanf("%d",&mark);
	
	if(mark>35)
	{
		printf("\n you will be pass");
	}
	else
	{
		printf("\n other wise fail");
	}
	
	getch();
}
