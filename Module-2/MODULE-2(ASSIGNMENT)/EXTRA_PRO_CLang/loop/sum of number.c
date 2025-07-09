//Calculate sum of 10 numbers using of while loop  

#include <stdio.h>
#include <conio.h>

void main()
{
    int count = 1, num, sum = 0;

    while(count <= 10)
    {
        printf("Enter number %d: ", count);
        scanf("%d", &num);

        sum+=num;

        count++; 
    }

    printf("\nThe sum of 10 numbers is: %d", sum);

    getch();
}

