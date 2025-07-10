// Find area of Rectangle Formula : A=wl 

#include<stdio.h>
#include<conio.h>

void main()
{
    float width,length,area;

    printf("\n enter width of the Rectangle :");
    scanf("%f",&width);
    
    printf("\n enter length of the Rectangle :");
    scanf("%f",&length);

    area=width*length;

    printf("\n area is = %.2f ",area);

    getch();
}
