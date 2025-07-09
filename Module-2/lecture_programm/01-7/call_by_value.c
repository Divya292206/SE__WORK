//call by value

#include<stdio.h>
#include<conio.h>

void swap(int a,int b)
{
	int c=0;
	printf("\n before sawp value :%d,%d ",a,b);
	c=a;
	a=b;
	b=c;
	printf("\n after sawp value :%d,%d ",a,b);	
}

void main()
{
	int x,y;
	x=10;
	y=20;
	
	printf("\n before swap value :%d,%d",x,y);
	swap(x,y);
	printf("\n after sawp value :%d,%d",x,y);
	
	getch();
}
