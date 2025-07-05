//10.	Write a program using switch to perform a basic calculator (addition, subtraction, multiplication, division) based on user choice.

#include<stdio.h>
#include<conio.h>

void main()
{
	int no,choice,x,y;
	float add,sub,mul,div;
	
	printf("\n enter number 1 :");
	scanf("%d",&x);
	
	printf("\n enter number 2 :");
	scanf("%d",&y);
	
	
	printf("\n 1.addition :");
	printf("\n 2.subtraction :");
	printf("\n 3.multiplication :");
	printf("\n 4.division :\n ");
	
	
	printf("\n enter choice[1 to 4] : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			add=x+y;
			printf("\n addition is :%f",add);
			break;
		
		case 2:
			sub=x-y;
			printf("\n subtraction is :%f",sub);
			break;
			
		case 3:
			mul=x*y;
			printf("\n multiplication is :%f",mul);
			break;
			
		case 4:
			div=x/y;
			printf("\n division is :%f",div);
			break;
	}
	
	getch();
	
}
