/*Write a C program to input marks of five subjects Physics, Chemistry, 
Biology, Mathematics and Computer. Calculate percentage and grade 
according to following: 
Percentage >= 90% : Grade A 
Percentage >= 80% : Grade B 
Percentage >= 70% : Grade C 
Percentage >= 60% : Grade D 
Percentage >= 40% : Grade E 
Percentage < 40% : Grade. */

#include<stdio.h>
#include<conio.h>

void main()
{
	float physics,chemistry,biology,mathe,computer;
	float sum,per;
	
	printf("\n enter physics mark :");
	scanf("%f",&physics);
	
	printf("\n enter chemistry mark :");
	scanf("%f",&chemistry);
	
	printf("\n enter biology mark :");
	scanf("%f",&biology);
	
	printf("\n enter mathe mark :");
	scanf("%f",&mathe);
	
	printf("\n enter computer mark :");
	scanf("%f",&computer);
	
	sum=physics+chemistry+biology+mathe+computer;
	per=sum/5;
	
	printf("\n total= %f",sum);
	printf("\n percentage = %f",per);
	
	if(per>=90)
	{
		printf("\n grade A");
	}
	getch();
}

