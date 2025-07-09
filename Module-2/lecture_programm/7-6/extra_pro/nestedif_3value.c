#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	printf("enter value:");
	scanf("%d",&a);
	
	printf("enter value:");
	scanf("%d",&b);
	
	printf("enter value:");
	scanf("%d",&c);
	
	if(a<b)
	{
		if(a<c)
		{
			printf("%d",a);
			if(b<c)
			{
				printf("%d",b);
				printf("%d",c);
			}
			else
			{
				printf("%d",c);
				printf("%d",b);
			}
		}
		else
		{
			printf("%d",a);
			printf("%d",a);
			printf("%d",b);
		}
	}
	else
	{
		if(b<c)
		{
			printf("%d",b);
			if(a<c)
			{
				printf("%d",a);
				printf("%d",c);
			}
			else
			{
				printf("%d",c);
				printf("%d",a);
			}
		}
		else
		{
			printf("%d",c);
			printf("%d",b);
			printf("%d",a);
		}
	}
	
	printf("number:%d,%d,%d"\n ,a,b,c);
	
	getch();
	
}
