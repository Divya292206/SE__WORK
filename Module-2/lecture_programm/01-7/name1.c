//nested printf

#include<stdio.h>
#include<conio.h>

void main()
{
	printf("%d",printf("Divya"));// second printf argument then return value
	
	getch();
}

//Inner printf("Divya") runs first
//
//It prints: Divya
//
//And returns the number of characters it printed ? which is 5
//
//Outer printf("%d", 5) runs next
//
//It prints: 5
