//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include <stdio.h>
#include <conio.h>

void main()
{
    int num;

    
    printf("Enter an integer: ");
    scanf("%d", &num);


    printf("\nN^1 = %d", num);                 
    printf("\nN^2 = %d", num * num);           
    printf("\nN^3 = %d", num * num * num);  

    getch(); 
}

