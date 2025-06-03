//Write a program to calculate sum of 5 subjects & find the percentage. Subject marks entered by user.


#include<stdio.h>
#include<conio.h>

void main()
{
	int s1,s2,s3,s4,s5,sum;
	int total =500;
	float per;

	printf("enter the mark of Guj : ");
	scanf("%d",&s1);

	printf("enter the mark of Eng : ");
	scanf("%d",&s2);

	printf("enter the mark of hindi : ");
	scanf("%d",&s3);

	printf("enter the mark of science : ");
	scanf("%d",&s4);

    printf("enter the mark of maths : ");
    scanf("%d",&s5);
    
    sum=s1+s2+s3+s4+s5;
    printf("\n");
    printf("Total : %d",sum);
    
    per = (sum*100)/total;
    printf("\n Persentage : %f",per);

	getch();


}
