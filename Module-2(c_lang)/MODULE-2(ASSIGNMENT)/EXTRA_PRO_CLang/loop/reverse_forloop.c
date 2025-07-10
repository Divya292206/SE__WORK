// C Program to Reverse a Number Using FOR Loop 

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,num,digit,reverse = 0;

    printf("\nEnter any number: ");
    scanf("%d", &num);

    for(i = num; i != 0; i = i / 10)
    {
        digit = i % 10; 
        reverse = reverse * 10 + digit;
    }

    printf("\nThe Reverse Number is: %d", reverse);
    
    getch();
}

