//write a programm to fing odd and even numbber.

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
