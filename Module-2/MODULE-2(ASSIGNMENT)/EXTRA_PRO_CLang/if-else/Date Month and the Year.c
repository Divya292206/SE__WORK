//Given Date Month and the Year Is Correct or Not Using If-Else 

#include<stdio.h>
#include<conio.h>

void main() {
    int day, month, year;

    printf("Enter day (1-31): ");
    scanf("%d", &day);
    
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    
    printf("Enter year: ");
    scanf("%d", &year);

    // Check for valid month
    if(month < 1 || month > 12) 
	{
        printf("Invalid Month\n");
    }
    // Check for valid day according to month and leap year
    else 
	{
        // February check
        if(month == 2)
		{
            // Leap year condition
            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			{
                if(day >= 1 && day <= 29)
                    printf("Valid Date\n");
                else
                    printf("Invalid Date\n");
            } 
			else 
			{
                if(day >= 1 && day <= 28)
                    printf("Valid Date\n");
                else
                    printf("Invalid Date\n");
            }
        }// Months with 30 days
        else if(month == 4 || month == 6 || month == 9 || month == 11) 
		{
            if(day >= 1 && day <= 30)
                printf("Valid Date\n");
            else
                printf("Invalid Date\n");
        }// Months with 31 days
        else 
		{
            if(day >= 1 && day <= 31)
                printf("Valid Date\n");
            else
                printf("Invalid Date\n");
        }
    }

    getch();
}

