//to input any alphabet and check whether it is a vowel or consonant. 

#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	
	printf("\n enter any charcter :");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("\n it is Vowel");
	}
	else
	{
		printf("\n it is consonant");
	}
	
	getch();
}
