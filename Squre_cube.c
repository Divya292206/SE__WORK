//Write a program to make a square and cube of number.


#include<stdio.h>
#include<conio.h>

void main() {
    int number;
    int square, cube;


    printf("Enter an integer: ");
    scanf("%d", &number);


    square = number * number;
    cube = number * number * number;

    // Display results
    printf("\n Square of %d is: %d", number, square);
    printf("\n Cube of %d is: %d", number, cube);


    getch();
    
}
