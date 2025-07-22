//exception handing

#include <iostream>
using namespace std;

float division(int x,int y)
{
	if(y==0)
	{
		throw "not divided by zero";
	}
	return (x/y);
}

int main()
{
	int a,b,ans;
	
	cout<<"enter number 1 :";
	cin>>a;
	
	cout<<"enter number 2 :";
	cin>>b;
	
	try
	{
		ans = division(a,b);
		cout<<"Ans is :"<<ans;
	}
	catch(const char* e)
	{
		cout<<e<<endl;
	}
	
	return 0;
	
}
