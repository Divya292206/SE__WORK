//Find circumference of Rectangle formula (l*w)*2


#include<stdio.h>
#include<conio.h>

void main()
{
    int l,w,c;

    printf("\n enter length :");
    scanf("%d",&l);

	printf("\n enter width:");
    scanf("%d",&w);
    
	c=(l+w)*2;

    printf("\n circumference of Rectangle formula is %d =",c);

    getch();
}


