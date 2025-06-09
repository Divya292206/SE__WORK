#include<stdio.h>
#include<conio.h>

void main()
{
	int myuserid=2922,mypass=1234;
	
	int uid,upass;
	
	printf("enter your username:");
	scanf("%d",&uid);
	
	printf("enter your password:");
	scanf("%d",&upass);
	
	if(uid==myuserid&&upass==mypass)
	{
		printf("\n login sucess");
	}
	else
	{
		printf("\n invaild details");
	}
	
	getch();
	
}
