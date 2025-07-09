#include<stdio.h>
#include<conio.h>

void main()
{
	int i,num,ans=0;
	
	printf("enter any number :");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++)
	{
		ans=num*i;
		printf("\n %d*%d=%d",num,i,ans);
	}
	
	getch();
	
}
