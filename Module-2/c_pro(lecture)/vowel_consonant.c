#include<stdio.h>
#include<conio.h>

void main()
{
	char alpha;
	
	printf("enter your alphabet : ");
	scanf("%c",&alpha);
	
	if(alpha == 'A'||alpha == 'E'||alpha == 'I'||alpha == 'O'||alpha == 'U')
	{
		printf("it is vowel");
	}
	else
	{
		printf("it is consonant");
	}
	
	getch();
	
}
