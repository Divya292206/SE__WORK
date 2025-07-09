//string function(strupr)

#include<stdio.h>
#include<conio.h>

void main()
{
	char name[50];
	
	printf("\n enter Name :");
	scanf("%s",&name);
	
	printf("\n name lower to uppercase case: %s",strupr(name));
	
	getch();
}
