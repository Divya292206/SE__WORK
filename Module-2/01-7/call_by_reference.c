//call by reference

#include<stdio.h>
#include<conio.h>

void mul(int a,int b,int *result)
{	
	*result=a*b;	
}

void main()
{
	int x,y,ans;
	
	x=10,y=20,ans=0;
	
	printf("\n before %d*%d=%d",x,y,ans);
	
	mul(x,y,&ans);
	
	printf("\n after %d*%d=%d",x,y,ans);
	
	getch();
	
	
}
