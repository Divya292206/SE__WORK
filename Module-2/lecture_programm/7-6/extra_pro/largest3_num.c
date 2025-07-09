//Find the greatest among three numbers using nested if.

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	printf("enter number :");
	scanf("%d",&a);
	
	printf("enter number :");
	scanf("%d",&b);
	
	printf("enter number :");
	scanf("%d",&c);
	
	if(a>=b)
	{
		if(a>=c)
		{
			printf("the gratest numbet is %d",a);
		}
		else
		{
			printf("the gratest numbet is %d",c);
		}
	}
	else
	{
		if(b>=c)
		{
			printf("the gratest numbet is %d",b);
		}
		else
		{
			printf("the gratest numbet is %d",c);
		}
	}
	getch();
}
