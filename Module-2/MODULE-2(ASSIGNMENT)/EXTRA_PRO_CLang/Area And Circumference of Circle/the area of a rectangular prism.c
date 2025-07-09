//find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
#include<conio.h>

void main()
{
    float length,width,height,area;

    printf("\n enter a length :");
    scanf("%f",&length);
    
    printf("\n enter a width:");
    scanf("%f",&width);
    
    printf("\n enter a height:");
    scanf("%f",&height);

    area=2*(width*length+height*length+height*width);

    printf("\n the area of a rectangular prism is = %f ",area);

    getch();
}
