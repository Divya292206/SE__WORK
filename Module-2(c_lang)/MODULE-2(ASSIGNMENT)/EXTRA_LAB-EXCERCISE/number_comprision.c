/*Write a C program that takes three numbers from the user and determines: 
o The largest number. 
o The smallest number. 
� Challenge: Solve the problem using both if-else and switch-case statements.*/

#include <stdio.h>
#include <conio.h>

int main() 
{
    int a, b, c;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Largest
    if (a >= b && a >= c)
        printf("Largest number: %d\n", a);
    else if (b >= a && b >= c)
        printf("Largest number: %d\n", b);
    else
        printf("Largest number: %d\n", c);

    // Smallest
    if (a <= b && a <= c)
        printf("Smallest number: %d\n", a);
    else if (b <= a && b <= c)
        printf("Smallest number: %d\n", b);
    else
        printf("Smallest number: %d\n", c);

    return 0;
}

