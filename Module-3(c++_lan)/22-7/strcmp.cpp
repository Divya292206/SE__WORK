//strcmp

#include <iostream>
#include<cstring>
using namespace std;

int main()
{
	char name[50] = "divya";
	char petname[20];
	
	do
	{
		cout<<"enter name :";
		cin>>petname;
	}while(strcmp(name,petname)!=0);
	
	

	
	cout<<"Answer is correct!!";
	return 0;
}
