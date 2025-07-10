// Count no. of even numbers and no. of odd number 

#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2,n3,n4,n5,even=0,odd=0;
	
	printf("\n enter number1 :");
	scanf("%d",&n1);
	if(n1%2==0)
	{
		even++;
	}
	else
	{
		odd++;
	}
	
	printf("\n enter number2 :");
	scanf("%d",&n2);
	if(n2%2==0)
	{
		even++;
	}
	else
	{
		odd++;
	}
	
	printf("\n enter number3 :");
	scanf("%d",&n3);
	if(n3%2==0)
	{
		even++;
	}
	else
	{
		odd++;
	}
	
	printf("\n enter number4 :");
	scanf("%d",&n4);
	if(n4%2==0)
	{
		even++;
	}
	else
	{
		odd++;
	}
	
	printf("\n enter number5 :");
	scanf("%d",&n5);
	if(n5%2==0)
	{
		even++;
	}
	else
	{
		odd++;
	}
	
	printf("\n even number is %d",even);
	printf("\n odd number is %d",odd);
	
		
	getch();
}
