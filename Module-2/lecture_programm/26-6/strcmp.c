//string function(strcmp)

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char name[30]="divya",name1[50];
	
	do
	{
		printf("\n enter name :");
		scanf("%s",&name1);
		
	}while(strcmp(name,name1)!=0);
	
	printf("\n Answer is Correct!!");
	


	getch();
}
