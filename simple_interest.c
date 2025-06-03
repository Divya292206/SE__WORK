//Write a program to find the simple Interest.

#include<stdio.h>
#include<conio.h>

void main()
{
    
    float p1,r1,t1,s1;
    
    printf("enter principal value :");
    scanf("%f",&p1);
    
    printf("enter rate value :");
    scanf("%f",&r1);
    
    printf("enter time :");
    scanf("%f",&t1);
    
    s1=(p1*r1*t1)/100;
    
    printf("simple interest: %f",s1);
    
    getch();
    
    
}
