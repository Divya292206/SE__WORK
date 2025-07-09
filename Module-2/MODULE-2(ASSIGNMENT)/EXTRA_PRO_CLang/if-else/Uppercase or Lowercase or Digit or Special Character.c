//C Program to Check Uppercase or Lowercase or Digit or Special Character

#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	
	printf("\n enter any char :");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z')
	{
		printf("\n Lowercase");
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("\n uppercase");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("\n digit");
	}
	else
	{
		printf("\n special character");
	}
	
	getch();
}
