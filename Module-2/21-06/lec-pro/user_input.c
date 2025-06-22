// user input 

#include<stdio.h>
#include<conio.h>

void main()
{
	int marks[5],i,j,sum=0;
	float avg;
	
	for(i=0;i<5;i++)
	{
		printf("\n enter your marks :");
		scanf("%d",&marks[i]);
	}
	
	for(i=0;i<5;i++)
	{
		sum+=marks[i];
	}
	printf("\n sum is %d",sum);
	
	avg=sum/5;
	
	printf("\n avg is %f",avg);
	
		
	getch();
}
