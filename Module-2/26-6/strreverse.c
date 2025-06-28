//string function(strrev)

#include<stdio.h>
#include<conio.h>

void main()
{
	char name[50];
	
	printf("\n enter Name :");
	scanf("%s",&name);
	
	printf("\n name is reverse : %s",strrev(name));
	
	getch();
}
