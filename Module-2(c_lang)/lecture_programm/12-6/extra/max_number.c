#include <stdio.h>

int main() {
    int num, digit, max = 0;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        if (digit > max) {
            max = digit;
        }
        num = num / 10;
    }

    printf("Maximum digit is: %d\n", max);

    return 0;
}

