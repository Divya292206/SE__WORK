//Convert kilometers into meters 

#include<stdio.h>
#include<conio.h>

void main()
{
	int kilometers,meters;
	
	printf("\n enter distance of kilometers :");
	scanf("%d",&kilometers);
	
	meters=kilometers*1000;
	
	printf("\n kilometers into meters is :%d",meters);
	
	getch();
}
