#include <stdio.h>
#include <conio.h>
#include <math.h> 

void main()
{
    float a = 3.65, b = 6.45,d=16;
    int c=-52;

    printf("\n floor = %.2f", floor(a));//decrease
    printf("\n ceil = %.2f", ceil(b)); //increase      
    printf("\n sqrt = %.2f", sqrt(d));         
    printf("\n pow = %.2f", pow(d, 2));      
    printf("\n abs = %d", abs(c));        

    getch();
}
