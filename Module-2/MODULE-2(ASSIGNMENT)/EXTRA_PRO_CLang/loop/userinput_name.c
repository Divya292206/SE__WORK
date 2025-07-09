//Accept 5 names from user at run time.

#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	char name[20];
	
	printf("\n -----------entered name------------ ");
	for(i=1;i<=5;i++)
	{
		printf("\n enter Name %d :",i);
		scanf("%s",&name);
		printf("\n %d	:	%s\n",i,name);
	}
	
	getch();
	
	

		
	
	getch();
}
