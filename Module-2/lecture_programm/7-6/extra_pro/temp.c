//Display "Hot", "Warm", or "Cold" based on temperature.

#include<stdio.h>
#include<conio.h>

void main() 
{
    int temp;

    printf("Enter the temperature: ");
    scanf("%d", &temp);

    if (temp >= 30) {
        printf("Hot\n");
    } else if (temp >= 20) {
        printf("Warm\n");
    } else {
        printf("Cold\n");
    }

    getch();
}

