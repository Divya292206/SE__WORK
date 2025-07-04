//unary operator

#include<stdio.h>
#include<conio.h>

void main()
{
	int x=10,b;
	
	x++;
	printf("\n %d",x);
	
	++x;
	printf("\n %d",x);
	
	b=x++;
	printf("\n %d",x);
	
	b=++x;
	printf("\n %d",b);
	
	b++;
	printf("\n %d",b);
	
	getch();
}
