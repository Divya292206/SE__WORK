#include<stdio.h>
#include<conio.h>

void main() 
{
    int a, b, temp;

    
    printf("\n Enter two numbers:");
    scanf("%d %d", &a, &b);

    
    printf("\n Before swapping: a = %d, b = %d", a, b);

    // Swapping using third variable
    temp = a;
    a = b;
    b = temp;

    // After swap
    printf("\n After swapping: a = %d, b = %d", a, b);
    
    getch();

    
}

