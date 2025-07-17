//method overloading with diff data type

#include <iostream>
using namespace std;

class cal
{
	public:
	int count(int a,int b)
	{
		return a+b;
	}
	double count(double c,double d)
	{
		return c*d;
	}
};

int main()
{
	cal c;
	cout<<c.count(6,5)<<endl;
	cout<<c.count(6.5,5.00)<<endl;
	
	return 0;
}
