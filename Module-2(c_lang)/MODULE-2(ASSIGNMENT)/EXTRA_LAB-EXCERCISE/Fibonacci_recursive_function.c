//Write a C program that generates the Fibonacci sequence up to N terms using a recursive function.

#include<stdio.h>
#include<conio.h> 

int fibonacci(int n)
{

	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}

void main()
{
	int num,i;
	
	printf("\n enter Number of Term :");
	scanf("%d",&num);
	
	printf("\n Fibonacci sequence up to N terms %d:\n",num);
	
	for(i=0;i<num;i++)
	{
		printf("%d",fibonacci(i));
	}
	
	getch();
}
