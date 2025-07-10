// Count total sum of even number and total no. of odd numbers 

#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2,n3,n4,n5,even_sum=0,odd_sum=0;
	
	printf("\n enter number1 :");
	scanf("%d",&n1);
	if(n1%2==0)
	{
		even_sum+=n1;
	}
	else
	{
		odd_sum+=n1;
	}
	
	printf("\n enter number2 :");
	scanf("%d",&n2);
	if(n2%2==0)
	{
		even_sum+=n2;
	}
	else
	{
		odd_sum+=n2;
	}
	
	printf("\n enter number3 :");
	scanf("%d",&n3);
	if(n3%2==0)
	{
		even_sum+=n3;
	}
	else
	{
		odd_sum+=n3;
	}
	
	printf("\n enter number4 :");
	scanf("%d",&n4);
	if(n4%2==0)
	{
		even_sum+=n4;
	}
	else
	{
		odd_sum+=n4;
	}
	
	printf("\n enter number5 :");
	scanf("%d",&n5);
	if(n5%2==0)
	{
		even_sum+=n5;
	}
	else
	{
		odd_sum+=n5;
	}
	
	printf("\n even number sum is %d:",even_sum);
	printf("\n odd number sum is %d:",odd_sum);
	
		
	getch();
}
