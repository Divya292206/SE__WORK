#include<stdio.h>
#include<conio.h>

void main() {
    int num, digit, min = 9;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        if (digit < min) {
            min = digit;
        }
        num = num / 10;
    }

    printf("Minimum digit is: %d\n", min);

    getch();
}

