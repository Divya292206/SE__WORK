//Accept 10 number using for loop and check  no. of even numbers and odd numbers

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,num,even=0,odd=0;
	
	for(i=1;i<=10;i++)
	{
		printf("\n enter %d number :",i);
		scanf("%d",&num);
		
		if(num%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	
	printf("\n----------Total Number------------");
	printf("\n Total even number is %d :",even);
	printf("\n Total odd number is %d :",odd);
	
	
	getch();
} 
