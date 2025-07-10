#include<stdio.h>
#include<conio.h>

void main()
{
	int t,time;
	
	printf("enter your time :");
	scanf("%d",&t);
	
	if(t>12)
	{
		time=t-12;
		printf("time is %d pm",time);
	}
	else
	{
		printf("time is %d am",t);
	}
	
	getch();
}
