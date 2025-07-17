//method overloading

#include <iostream>
using namespace std;

class cal
{
	public:
	int count(int a,int b)
	{
		return a+b;
	}
	int count(int a,int b,int c)
	{
		return a*b*c;
	}
};

int main()
{
	cal c;
	cout<<c.count(6,5)<<endl;
	cout<<c.count(6,5,8)<<endl;
	
	return 0;
}
