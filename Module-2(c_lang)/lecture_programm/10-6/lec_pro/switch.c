#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	
	printf("\n if you press 1 monday \n if you press 2 tuesday \n if you press 3 wednesday \nif you press 4 thursday\nif you press 5 friday\nif you press 6 saturday\nif you press 7 sunday\n:");
	printf("select your day :");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1: printf("monday");
		break;
		
		case 2: printf("tuesday");
		break;
		
		case 3: printf("wednesday");
		break;
		
		case 4: printf("thursday");
		break;
		
		case 5: printf("friday");
		break;
	
		case 6: printf("saturday");
		break;
		
		case 7: printf("sunday");
		break;
		
		default:
			printf("please enter vaild number");
			break;
			
		
		getch();

	}
}
