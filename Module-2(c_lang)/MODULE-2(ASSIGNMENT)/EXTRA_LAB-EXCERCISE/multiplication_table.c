/*Write a C program that takes an integer input from the user and prints its multiplication 
table using a for loop. */

#include<stdio.h>
#include<conio.h>

int main() 
{
    int num, i;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d:\n", num);
    
    for (i = 1; i <= 10; i++) 
	{
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

