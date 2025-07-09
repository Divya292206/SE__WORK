//Program of Armstrong Number in C Using For Loop & While Loop

#include<stdio.h>
#include<conio.h>

void main()
{
	int num,original,rem,result=0;
	
	printf("\n enter Number :");
	scanf("%d",&num);
	
	original=num;
	
	while(num!=0)
	{
		rem=num%10;
		result+=rem*rem*rem;
		num=num/10;
	}
	
	if(result==original)
	{
		printf("\n %d is Armstrong Number",original);
	}
	else
	{
		printf("\n %d is not Armstrong Number",original);
	}
	
	getch();
}
