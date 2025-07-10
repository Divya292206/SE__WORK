#include <stdio.h>

void main() {
    int num,digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Logic to reverse the number
    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    // Output the reversed number
    printf("Reversed number: %d\n", reverse);

    getch();
}

