//Find the Character Is Vowel or Not 

#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	
	printf("\n enter any charcter :");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("\n Vowel");
	}
	else
	{
		printf("\n Not Vowel");
	}
	
	getch();
}
