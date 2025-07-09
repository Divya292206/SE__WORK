//string function(strcat)

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char name[20],surname[50];

	printf("\n enter name :");
	scanf("%s",name);

	printf("\n enter surname :\n");
	scanf("%s",surname);
	
	printf("%s",strcat(name,surname));	
	getch();
}
