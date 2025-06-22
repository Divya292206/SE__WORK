// two dimensional Array

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j ,num[3][3]={ {10,20,30},{40,50,60},{70,80,90} };
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			//printf("%d",num[i][j]);
			printf("\n [%d] [%d]=%d",i,j,num[i][j]);
		}
		printf("\n");
	}
	
	getch();	
	
	
}
