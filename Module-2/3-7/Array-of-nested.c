// array of nested structer

#include<stdio.h>
#include<conio.h>

struct profession
{
	char eduction[50];
	float per; 
}p1;

struct personal
{
	int id;
	char name[50];
	char collage[50];
	struct profession pro;
}p11[50];

void main()
{
	int i;
	
	for(i=0;i<2;i++)
	{
		printf("\n enter id :");
		scanf("%d",&p11[i].id);
	
		printf("\n enter name :");
		scanf("%s",&p11[i].name);
	
		printf("\n enter collage :");
		scanf("%s",&p11[i].collage);
	
		printf("\n enter age :");
		scanf("%d",&p11[i].pro.eduction);
	
		printf("\n enter salary :");
		scanf("%d",&p11[i].pro.per);
	}
	
	for(i=0;i<2;i++)
	{
		printf("\n your id is :%d",p11[i].id);
		printf("\n your name is :%s",p11[i].name);
		printf("\n your surname is :%s",p11[i].collage);
		printf("\n your eduction is :%s",p11[i].pro.eduction);
		printf("\n your percentage is :%f",p11[i].pro.per);
	}
	
	getch();
}
