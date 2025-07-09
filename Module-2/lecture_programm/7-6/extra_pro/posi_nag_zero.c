//Check if a number is positive, negative, or zero.

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
    else if(num==0)
    {
        printf("Zero");
    }
    else
    {
    	printf("nagative");
	}
    
    getch();
}
