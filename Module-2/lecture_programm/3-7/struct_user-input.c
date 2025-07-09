//Array with structer(user input)

#include<stdio.h>
#include<conio.h>

struct details
{
	int id;
	char name[10];
	char surname[50];
	int age;
	int salary;
}d1[50];

void main()
{
	int i,n;
	printf("\n total number of student : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n enter id :");
		scanf("%d",&d1[i].id);
	
		printf("\n enter name :");
		scanf("%s",&d1[i].name);
	
		printf("\n enter surname :");
		scanf("%s",&d1[i].surname);
	
		printf("\n enter age :");
		scanf("%d",&d1[i].age);
	
		printf("\n enter salary :");
		scanf("%d",&d1[i].salary);
	}
	
	printf("\n Your details..\n");
	
	for(i=0;i<n;i++)
	{
		printf("\n your id is :%d",d1[i].id);
		printf("\n your name is :%s",d1[i].name);
		printf("\n your surname is :%s",d1[i].surname);
		printf("\n your age is :%d",d1[i].age);
		printf("\n your salary is :%d",d1[i].salary);	
	}
	


	
	getch();
}
