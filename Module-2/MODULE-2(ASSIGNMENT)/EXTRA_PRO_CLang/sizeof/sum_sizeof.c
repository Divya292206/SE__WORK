// Accept 2 numbers and find out its sum check it size

#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2, sum;

    
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    
    sum = num1 + num2;
    
    printf("\nSum = %d", sum);

    
    printf("\n\nSize of num1: %d bytes", sizeof(num1));
    printf("\nSize of num2: %d bytes", sizeof(num2));
    printf("\nSize of sum : %d bytes", sizeof(sum));

    getch();
}

