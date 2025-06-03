#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    
    printf("enter your number :");
    scanf("%d",&num);
    
    if(num>0)
    {
       printf("positive"); 
    }
    else
    {
        printf("nagative");
    }
    
    getch();
}