/*Write a C++ program that demonstrates the use of variables and constants. Create 
variables of different data types and perform operations on them. */

#include <iostream>
using namespace std;

int main()
{
	string name;
	int mark1,mark2;
	float sum,avg;
	
	const double PI = 3.14;
	
	cout<<"enter name :";
	cin>>name;
	
	cout<<"enter your marks :";
	cin>>mark1>>mark2;
	
	sum=mark1+mark2;
	
	avg=sum/2;
	
	cout<<"sum is :"<<sum<<endl;
	cout<<"avg is :"<<avg<<endl;
	cout<<"const value is fixed :"<<PI<<endl;
	
	return 0;
	
}
