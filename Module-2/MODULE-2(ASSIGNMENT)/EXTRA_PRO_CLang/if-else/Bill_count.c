/*rite a C program to input electricity unit charges and calculate 
total electricity bill according to the given condition: 
For first 50 units Rs. 0.50/unit 
For next 100 units Rs. 0.75/unit 
For next 100 units Rs. 1.20/unit 
For unit above 250 Rs. 1.50/unit 
An additional surcharge of 20% is added to the bill */

#include <stdio.h>

int main() 
{
	
    float units, amount, surcharge, total;
    
    
    printf("Enter total electricity units consumed: ");
    scanf("%f", &units);
    
    if(units <= 50) 
	{
        amount = units * 0.50;
    } 
	else if(units <= 150) 
	{
        amount = (50 * 0.50) + ((units - 50) * 0.75);
    } 
	else if(units <= 250)
	{
        amount = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } else 
	{
        amount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    surcharge = amount * 0.20;

    
    total = amount + surcharge;

    
    printf("Electricity Bill:\n");
    printf("Base Amount = Rs. %.2f\n", amount);
    printf("Surcharge (20%%) = Rs. %.2f\n", surcharge);
    printf("Total Bill = Rs. %.2f\n", total);

    return 0;
}

//Calculation:
//
//First 50: 50 × 0.50 = 25
//
//Next 100: 100 × 0.75 = 75
//
//Next 100: 100 × 1.20 = 120
//
//Remaining 50 (300 - 250): 50 × 1.50 = 75
//
//Base = 25 + 75 + 120 + 75 = Rs. 295.00
//
//Surcharge = 20% of 295 = Rs. 59.00
//
//Total = 295 + 59 = Rs. 354.00
