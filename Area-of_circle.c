#include<stdio.h>
#include<conio.h>

void main()
{

        float PI=3.14;
        int r;
        float ans;
        
        printf("enter radious :");
        scanf("%d",&r);
        
        ans = PI*r*r;
        
        printf("Area of circle is %f",ans);
        
        getch();
        
}