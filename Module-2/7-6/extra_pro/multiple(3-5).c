#include<stdio.h>
#include<conio.h>

void main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("%d is a multiple of 3 and 5.\n", num);
    } else {
        printf("%d is not a multiple of 3 and 5.\n", num);
    }

    getch();
}

