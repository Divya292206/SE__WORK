/*Write a C program that accepts 10 integers from the user and stores them in an array. The 
program should then find and print the maximum and minimum values in the array.*/

#include <stdio.h>
#include <conio.h>

int main() 
{
    int numbers[10];
    int i, max, min;

    printf("Enter 10 integers:\n");
    
    for (i = 0; i < 10; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    max = min = numbers[0];


    for (i = 1; i < 10; i++) 
	{
        if (numbers[i] > max)
        {
        	max = numbers[i];
		}
        if (numbers[i] < min)
        {
        	min = numbers[i];
		}
            
    }

    printf("Maximum value = %d\n", max);
    printf("Minimum value = %d\n", min);

    return 0;
}

