// Accept 5 numbers from user and find those numbers factorials 


#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,num,fact;
	
	for(i=1;i<=5;i++)
	{
		printf("\n enter number :");
		scanf("%d",&num);
		
		fact=1;
		
		for(j=1;j<=num;j++)
		{
			fact*=j;
		}
		printf("\n factorials number is %d is: %d\n",num,fact);
	}
	
	getch();
}
