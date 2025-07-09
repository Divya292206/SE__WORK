//Accept 5 numbers from user and find each numbers factorial 

#include<stdio.h>
#include<conio.h>

void main()
{
	int no,i,j;
	
	for(i=1;i<=5;i++)
	{
		printf("\n enter %d number :",i);
		scanf("%d",&no);
		
		int fact=1;
		for(j=1;j<=no;j++)
		{
			fact*=j;
		}
		
		printf("Factorial of %d is: %d\n",no,fact);
	}
	
	
	getch();
}
