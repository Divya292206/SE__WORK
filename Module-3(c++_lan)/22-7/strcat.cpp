//string str

#include <iostream>
#include<cstring>
using namespace std;

int main()
{
	char name[50];
	char petname[20];
	
	cout<<"enter name :";
	cin>>name;
	
	cout<<"enter name :";
	cin>>petname;
	
	cout<<strcat(name,petname);
	
	return 0;
}
