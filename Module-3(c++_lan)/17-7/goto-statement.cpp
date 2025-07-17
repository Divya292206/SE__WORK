//goto statement

#include <iostream>
using namespace std;

int main()
{
	int age;
	
	cout<<"enter age :";
	cin>>age;
	
	vote:
		cout<<"not eligible to vote";
		
	
	if(age<18)
	{
		goto vote;
	}
	else
	{
		cout<<"eligible to vote";
	}
	
	
		return 0;
}
