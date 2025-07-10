// Write a program you have to print the Fibonacci series up to user given number

#include <stdio.h>
#include <conio.h>

void main()
{
    int no,a = 0,b = 1,c,i;

    printf("Enter the limit of Fibonacci series: ");
    scanf("%d",&no);

    printf("Fibonacci Series %d is:\n", no);

    for(i = 0;a <= no;i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    getch();
}

