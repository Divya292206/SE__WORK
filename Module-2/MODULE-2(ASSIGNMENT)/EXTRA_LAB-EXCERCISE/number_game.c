/* Write a C program that implements a simple number guessing game. The program should 
generate a random number between 1 and 100, and the user should guess the number 
within a limited number of attempts. */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int number, guess, i;

    srand(time(0)); 
    number = rand() % 100 + 1; 

    printf("Guess the number between 1 and 100\n");

    for (i = 1; i <= 5; i++) 
	{ // 5 attempts
        printf("Attempt %d: ", i);
        scanf("%d", &guess);

        if (guess == number) 
		{
            printf("Correct! You win!\n");
            break;
        } 
		else if (guess < number) 
		{
            printf("Too low!\n");
        } 
		else
		{
            printf("Too high!\n");
        }
    }

    if (guess != number) 
	{
        printf("Sorry, the number was %d.\n", number);
    }

    return 0;
}

