//Accept number of students from user. I need to give 5 apples to each 
//student. How many apples are required? 

#include <stdio.h>
#include <conio.h>

void main()
{
    int students, total_apples;

    // Input number of students
    printf("Enter the number of students: ");
    scanf("%d", &students);

    // Calculate total apples
    total_apples = students * 5;

    // Output result
    printf("Total apples required = %d\n", total_apples);

    getch();
}

