//Array

#include<stdio.h>
#include<conio.h>

void main()
{
	int num[10],i; // variable ini
	
	num[0]=10; //array index start 0.
	num[1]=20; //calles by index.
	num[2]=30; // vaule aasign.
	num[3]=40;
	num[4]=50;
	num[5]=60;
	num[6]=70;
	num[7]=80;
	num[8]=90;
	num[9]=100;
	
	for(i=0;i<10;i++)
	{
		printf("\n your mark is :%d",num[i]);
	}
	
	getch();	
	
	
}
