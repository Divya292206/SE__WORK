//Write a C program that takes a string from the user and counts the number of vowels and consonants in the string. 

#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100];
	
	int i=0,vowel=0,consonants=0;
	
	printf("\n enter string :");
	scanf("%s",&str);
	
	while(str[i] != '\0')
	{
		char ch=str[i];
		
		if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
		{
			if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' ||ch=='O' || ch=='U')
			{
				vowel++;
			}
			else
			{
				consonants++;		
			}	
		}
		i++;	
	}	
	
	printf("\n number of vowel :%d\n",vowel);
	printf("\n number of consonants :%d\n",consonants);
	
	getch();
}

