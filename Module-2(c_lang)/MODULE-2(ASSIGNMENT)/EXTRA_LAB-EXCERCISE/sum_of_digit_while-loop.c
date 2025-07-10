/*Write a C program that takes an integer from the user and calculates the sum of its digits 
using a while loop. */

#include <stdio.h>
#include <conio.h>

int main() 
{
    int num, digit, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) 
	{
        num = -num;
    }

    while (num != 0) 
	{
        digit = num % 10;     
        sum += digit;         
        num = num / 10;       
	}

    
    printf("Sum of digits = %d\n", sum);

    return 0;
}

