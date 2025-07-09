//Accept number and find out square of that value 

#include <stdio.h>
#include <conio.h>

void main()
{
    int num, square;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    square = num * num;

    
    printf("Square of %d is %d", num, square);

    getch(); 
}

