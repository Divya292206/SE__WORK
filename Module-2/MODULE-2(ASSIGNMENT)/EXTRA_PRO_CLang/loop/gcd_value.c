// Find the GCD of Two Numbers Using Loop

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,gcd,i;
	
	printf("\n enter two number :");
	scanf("%d %d",&a,&b);
	
	for(i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			gcd=i;
		}
	}
	
	printf("\n gcd %d and %d is :%d",a,b,gcd);
	
	getch();
}
