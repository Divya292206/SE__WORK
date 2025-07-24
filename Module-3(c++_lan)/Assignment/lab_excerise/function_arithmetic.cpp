/*Write a C++ program that defines functions for basic arithmetic operations (add, 
subtract, multiply, divide). The main function should call these based on user input. */

#include <iostream>
using namespace std;

float add(float a,float b)
{
	return a+b;
}
float sub(float a,float b)
{
	return a-b;
}
float mul(float a,float b)
{
	return a*b;
}
float div(float a,float b)
{
	return a/b;
}

int main()
{
	float num1,num2,result;
	int choice;
	
	cout<<"---------arithmetic operations----------"<<endl<<endl;
	
	cout<<"enter Two value :";
	cin>>num1>>num2;
	
	cout<<"----operation----"<<endl;
	cout<<"1.addition"<<endl;	
	cout<<"2.subtract"<<endl;	
	cout<<"3.multiply"<<endl;	
	cout<<"4.divide"<<endl;
	cout<<endl;
	
	cout<<"enter your operation(+,-,*,/) :";
	cin>>choice;	
	
	switch(choice)
	{
		case 1: 
			result=add(num1,num2);
			cout<<"result :"<<result;
			break;
		case 2: 
			result=sub(num1,num2);
			cout<<"result :"<<result;
			break;
		case 3: 
			result=mul(num1,num2);
			cout<<"result :"<<result;
			break;
		case 4: 
			result=div(num1,num2);
			cout<<"result :"<<result;
			break;
		
	}
	
	return 0;
	
}
