/*Write a C++ program that performs both implicit and explicit type conversions and 
prints the results. */

#include <iostream>
using namespace std;

int main()
{
	int a=10;
	float b=10.5;
	
	float sum = a + b;
	
	int newvalue = (int)b + a;
	
	cout<<"sum is :"<<sum<<endl;
	cout<<"newvalue is :"<<newvalue<<endl;
	
	return 0;
}
