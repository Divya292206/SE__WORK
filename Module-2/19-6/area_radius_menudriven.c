#include<stdio.h>
#include<conio.h>

void main()
{
    int choice;
    float area, base, radius, height, width, length;

    printf("\n------------ area Calculator -----------\n");
    printf(" 1. Area of Triangle\n");
    printf(" 2. Area of Rectangle\n");
    printf(" 3. Area of Circle\n");
    printf("----------------------------------------\n");

    printf("\nEnter your choice [1 to 3]: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("\n enter the base and height of triangle :");
        scanf("%f %f", &base, &height);

        area = 0.5 * base * height;

        printf("\nArea of Triangle: %f", area);
    }

    if(choice == 2)
    {
        printf("\n enter the length and width of Rectangle :");
        scanf("%f %f", &length, &width);

        area = length * width;

        printf("\nArea of Rectangle: %f", area);
    }

    if(choice == 3)
    {
        printf("\n enter the radius :");
        scanf("%f", &radius);

        area = 3.14 * radius * radius;

        printf("\nArea of Circle: %f", area);
    }

    if(choice < 1 || choice > 3)
    {
        printf("\nInvalid choice");
    }

    getch();
}

