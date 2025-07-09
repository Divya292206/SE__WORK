//Write a C Program to Print the Multiplication Table of N 

#include<stdio.h>
#include<conio.h>

void main()
{
	int no,ans,i;
	
	printf("\n enter number :");
	scanf("%d",&no);
	
	printf("\n Multiplication table %d \n",no);
	
	for(i=1;i<=10;i++)
	{
		ans=no*i;
		printf("\n %d*%d=%d",no,i,ans);
	}
	
	getch();
}
