//structure with array

#include<stdio.h>
#include<conio.h>

struct details
{
	int id;
	char name[50];
	char surname[50];
	char address[50];
	int salary;
}d1[50];

void main()
{
	int i;
	
	for(i=1;i<=2;i++)
	{
		printf("\n enter id :");
		scanf("%d",&d1[i].id);
		
		printf("\n enter salary :");
		scanf("%s",&d1[i].salary);
	
		printf("\n enter name :");
		scanf("%s",&d1[i].name);
		
		printf("\n enter surname :");
		scanf("%s",&d1[i].surname);
		
		printf("\n enter address :");
		scanf("%s",&d1[i].address);		
		
	}
	
	for(i=1;i<2;i++)
	{
		printf("\n enter id %d",d1[i].id);
		printf("\n enter id %d",d1[i].salary);
		printf("\n enter id %d",d1[i].name);
		printf("\n enter id %d",d1[i].surname);
		printf("\n enter id %d",d1[i].address);
	
	}
	
	
	getch();
	

}
