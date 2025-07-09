//string function(strcpy)

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char f1[20]="apple";
	char f2[50]="watermalon";
	
	strcpy(f1,f2);
	
	printf("\n %s ",f1);
	printf("\n %s",f2);
	
	getch();
}
