//string function(strlwr)

#include<stdio.h>
#include<conio.h>

void main()
{
	char name[50];
	
	printf("\n enter Name :");
	scanf("%s",&name);
	
	printf("\n name uppercase to lowwer case: %s",strlwr(name));
	
	getch();
}
