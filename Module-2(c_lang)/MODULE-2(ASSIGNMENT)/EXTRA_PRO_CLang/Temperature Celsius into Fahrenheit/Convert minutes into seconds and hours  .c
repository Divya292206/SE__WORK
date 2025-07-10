//Convert minutes into seconds and hours  

#include <stdio.h>
#include <conio.h>

void main()
{
    int minutes;
    int seconds;
    float hours;

    printf("\n Enter minutes: ");
    scanf("%d", &minutes);

      
    seconds = minutes * 60;
    hours = minutes / 60.0;

    printf("\nSeconds = %d", seconds);
    printf("\nHours = %.2f", hours);

    getch();
}

