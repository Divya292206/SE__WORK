//Check whether a given number is even or odd.

#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    
    printf("enter your number :");
    scanf("%d",&num);
    
    if(num%2==0)
    {
       printf("odd"); 
    }
    else
    {
        printf("even");
    }
    
    getch();
}
