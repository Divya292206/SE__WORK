//Write a C Program to Display The Size of Different Data Types

#include <stdio.h>
#include <conio.h>

void main()
{
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Size of float: %d bytes\n", sizeof(float));
    printf("Size of double: %d bytes\n", sizeof(double));
    printf("Size of char: %d byte\n", sizeof(char));
	printf("Size of long: %d byte\n", sizeof(long));    

    getch(); // Waits for a key press
}

