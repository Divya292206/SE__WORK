//pointer with array

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10];
	int *p;
	int i;
	
	p=&a[0];
	
	printf("\n enter value of array \n ");
	
	for(i=0;i<10;i++)
	{
		printf("\n a[%d] :",i+1);
		scanf("%d",&(*p++));
	}
	
	p=&a[0];
	
	for(i=0;i<10;i++)
	{
		printf("\n a[%d] : %d\n",i+1,*p++);
	}
	
	getch();
	
}
