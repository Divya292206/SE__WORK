#include<stdio.h>
#include<conio.h>

void main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 7 == 0) {
        printf("%d is a multiple of 7.\n", num);
    } else {
        printf("%d is not a multiple of 7.\n", num);
    }

    getch();
}

