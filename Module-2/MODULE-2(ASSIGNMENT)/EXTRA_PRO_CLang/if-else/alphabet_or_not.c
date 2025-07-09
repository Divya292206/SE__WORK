//to check whether a character is in the alphabet or not.

#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	
	printf("\n enter any charcter :");
	scanf("%c",&ch);
	
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
	{
		printf("\n it is alphabet ");
	}
	else
	{
		printf("\n it is not alphabet");
	}
	
	getch();
}
