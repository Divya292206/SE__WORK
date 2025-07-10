//Convert temperature fahrenheit to celsius 

#include<stdio.h>
#include<conio.h>

void main()
{
	float Celsius,Fahrenheit;
	
	printf("\n enter Fahrenheit :");
	scanf("%f",&Fahrenheit);
	
	Celsius=(Fahrenheit-32)*5/9;
	
	printf("\n temperature fahrenheit to celsius is : %f",Celsius);
	
	getch();
}
