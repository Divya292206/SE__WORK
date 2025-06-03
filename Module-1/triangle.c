//Write a program to find the Area of Triangle


#include<stdio.h>
#include<conio.h>

void main()
{
    
    int base,height,ans;
    
    printf("enter base value :");
    scanf("%d",&base);
    
    printf("enter height value :");
    scanf("%d",&height);
    
    ans=(base*height)/2;
    
    printf("area of traingle : %d",ans);
    
    getch();
    
    
}
