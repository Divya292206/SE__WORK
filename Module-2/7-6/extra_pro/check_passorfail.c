//Print "Pass" if marks are 40 or above, otherwise print "Fail".

#include<stdio.h>
#include<conio.h>

void main()
{
	int marks;
	
	printf("enter mark :");
	scanf("%d",&marks);
	
	if(marks>40)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
	
	getch();
}
