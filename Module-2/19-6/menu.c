#include<stdio.h>
#include<conio.h>

void main()
{
    int choice;
    float no1, no2, result;

    printf("\n------------ Calculator Menu -----------\n");
    printf(" 1. Addition\n");
    printf(" 2. Subtraction\n");
    printf(" 3. Multiplication\n");
    printf(" 4. Division\n");
    printf("----------------------------------------\n");


    printf("\nEnter first number: ");
    scanf("%f",&no1);

    printf("Enter second number: ");
    scanf("%f",&no2);

    
    printf("\nEnter your choice [1 to 4]: ");
    scanf("%d",&choice);

    
    switch(choice)
    {
        case 1:
            result = no1 + no2;
            printf("\nAddition = %.2f", result);
            break;

        case 2:
            result = no1 - no2;
            printf("\nSubtraction = %.2f", result);
            break;

        case 3:
            result = no1 * no2;
            printf("\nMultiplication = %.2f", result);
            break;

        case 4:
            if(no2 != 0)
            {
                result = no1 / no2;
                printf("\nDivision = %.2f", result);
            }
            else
            {
                printf("\nError: Division by zero is not allowed.");
            }
            break;

        default:
            printf("\nInvalid choice!");
    }

    getch();
}

