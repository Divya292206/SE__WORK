//inline function

#include <iostream>
using namespace std;

inline int add(int a,int b)
{
	return a+b;
}

int main()
{
	cout<<add(6,5)<<endl;
	cout<<add(12,23)<<endl;
	cout<<add(45,6)<<endl;
	cout<<add(78,65)<<endl;
	cout<<add(7,8)<<endl;
	cout<<add(89,56)<<endl;
	cout<<add(89,45)<<endl;
	
	return 0;
}
