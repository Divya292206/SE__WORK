// Calculate the Sum of Natural Numbers Using the While Loop 

#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,num,sum=0;
	
	printf("\n enter number :");
	scanf("%d",&num);
	
	while(i<=num)
	{
		sum+=i;
		i++;
	}
	
	printf("\n sum is %d",sum);
}
