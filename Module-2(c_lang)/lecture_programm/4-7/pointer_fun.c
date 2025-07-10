//pointer with function

#include<stdio.h>
#include<conio.h>

void mul(int *num)
{
	*num*=2;
	printf("\n %d",*num);
}

void main()
{
	int x=10;
	mul(&x);
	printf("\n %d",x);
	
	getch();
}
