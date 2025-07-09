//simple structure

#include<stdio.h>
#include<conio.h>

struct name
{
	int id;
	char name[10];
}n1;

void main()
{
	printf("\n enter id :");
	scanf("%d",&n1.id);
	
	printf("\n enter name :");
	scanf("%s",&n1.name);
	
	printf("\n Your details..");
	
	printf("\n your id is :%d",n1.id);
	printf("\n your name is :%s",n1.name);
	
	getch();
}
