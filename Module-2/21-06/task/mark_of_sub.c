// Get value for diffrent subjects and find the percentage

#include<stdio.h>
#include<conio.h>

void main()
{
	int mark[5],total=0,i;
	char subject[5][25]={"Guj","Eng","Hindi","Science","Eco"};
	float per;
	
	for(i=0;i<=5;i++)
	{
		printf("\n enter marks for %s  :  ",subject[i]);
		scanf("%d",&mark[i]);
		
		total+=mark[i];
	}
	per=total/5;
	
	printf("\n total = %d",total);
	printf("\n per = %f",per);
	getch();
	
	
}
