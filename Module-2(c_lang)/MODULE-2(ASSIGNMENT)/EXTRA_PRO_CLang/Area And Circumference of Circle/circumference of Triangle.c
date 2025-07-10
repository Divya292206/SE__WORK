//Find circumference of Triangle formula :  triangle = a + b + c 

#include<stdio.h>
#include<conio.h>

void main()
{
    float a,b,c,c1;

    printf("\n enter a frist side[a]:");
    scanf("%f",&a);
    
    printf("\n enter a second side[b] :");
    scanf("%f",&b);
    
    printf("\n enter a third side[c] :");
    scanf("%f",&c);

    c1=a+b+c;

    printf("\n circumference of Triangle is = %f ",c1);

    getch();
}
