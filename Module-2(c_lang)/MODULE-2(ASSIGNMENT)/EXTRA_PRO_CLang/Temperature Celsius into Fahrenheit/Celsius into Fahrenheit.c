//Convert Temperature Celsius into Fahrenheit 

#include<stdio.h>
#include<conio.h>

void main()
{
	float Celsius,Fahrenheit;
	
	printf("\n enter Celsius :");
	scanf("%f",&Celsius);
	
	Fahrenheit=(Celsius*9/5)+35;
	
	printf("\n Temperature Celsius into Fahrenheit is : %f",Fahrenheit);
	
	getch();
}
