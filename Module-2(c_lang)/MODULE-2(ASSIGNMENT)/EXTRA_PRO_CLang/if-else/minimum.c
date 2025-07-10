//Find the minimum among three numbers 

#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2,n3;
	
	printf("\n enter three number :");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1<n2 && n1<n3)
	{
		printf("\n the Minimum number is =%d",n1);
	}
	else if(n2<n1 && n2<n3)
	{
		printf("\n the Minimum number is =%d",n2);
	}
	else
	{
		printf("\n the Minimum number is =%d",n3);
	}
	
	getch();
}
