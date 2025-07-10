//Write multiplication table using while loop 

#include<stdio.h>
#include<conio.h>

void main()
{
	int no,ans,i=1;
	
	printf("\n enter number :");
	scanf("%d",&no);
	
	printf("\n Multiplication table %d \n",no);
	
	while(i<=10)
	{
		ans=no*i;
		printf("\n %d*%d=%d",no,i,ans);
		i++;
	}
	
	getch();
}
