////simple structure in diffrent data type

#include<stdio.h>
#include<conio.h>

struct details
{
	int id;
	char name[10];
	char surname[50];
	int age;
	int salary;
}d1;

void main()
{
	printf("\n enter id :");
	scanf("%d",&d1.id);
	
	printf("\n enter name :");
	scanf("%s",&d1.name);
	
	printf("\n enter surname :");
	scanf("%s",&d1.surname);
	
	printf("\n enter age :");
	scanf("%d",&d1.age);
	
	printf("\n enter salary :");
	scanf("%d",&d1.salary);
	
	printf("\n Your details..\n");
	
	printf("\n your id is :%d",d1.id);
	printf("\n your name is :%s",d1.name);
	printf("\n your surname is :%s",d1.surname);
	printf("\n your age is :%d",d1.age);
	printf("\n your salary is :%d",d1.salary);


	
	getch();
}
