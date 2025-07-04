//pointer with struct

#include<stdio.h>
#include<conio.h>

struct info
{
	int no;
}i1,*ptr;

void main()
{
	ptr=&i1;
	ptr->no=50;
	printf("\n %d",i1.no);	
	
	getch();
}
