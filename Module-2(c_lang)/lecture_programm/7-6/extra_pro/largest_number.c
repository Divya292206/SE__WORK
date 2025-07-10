//Identify the largest among three numbers.

#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2,n3;
	
	printf("enter your three number :");
	scanf("%d %d %d",&n1,&n2,&n3);

	if(n1>=n2 && n1>=n3)
	{
		printf("the largest number is %d",n1);
	}
	else if(n2>=n1 && n2>=n3)
	{
		printf("the largest number is %d",n2);
	}
	else
	{
		printf("the largest number is %d",n3);
	}
	
	getch();
}
