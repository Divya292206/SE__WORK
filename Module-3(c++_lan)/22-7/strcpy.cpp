//strcpy

#include <iostream>
#include<cstring>
using namespace std;

int main()
{
	char name[50];
	char petname[20];
	
	cout<<"enter name :";
	cin>>name;
	
	cout<<strcpy(petname,name);
	
	cout<<petname;
	return 0;
}
