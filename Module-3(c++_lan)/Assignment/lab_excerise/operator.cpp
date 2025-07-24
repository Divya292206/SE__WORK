/*Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise 
operators. Perform operations using each type of operator and display the results.*/

#include <iostream>
using namespace std;

int main()
{
	int a = 20,b = 10;
	
	cout<<"----------Arithmetic operator----------"<<endl;
	cout<<"A + B ="<<a+b<<endl;
	cout<<"A - B ="<<a-b<<endl;
	cout<<"A * B ="<<a*b<<endl;
	cout<<"A / B ="<<a/b<<endl;
	cout<<"A % B ="<<a%b<<endl;
	
	cout<<"----------Relational operator----------"<<endl;
	cout<<"A == B ="<<(a == b)<<endl;
	cout<<"A < B ="<<(a < b)<<endl;
	cout<<"A > B ="<<(a > b)<<endl;
	cout<<"A <= B ="<<(a <= b)<<endl;
	cout<<"A >= B ="<<(a >= b)<<endl;
	cout<<"A != B ="<<(a != b)<<endl;
	
	cout<<"----------Logical operator----------"<<endl;
	cout<<"A && B ="<<(a && b)<<endl;
	cout<<"A || B ="<<(a || b)<<endl;
	cout<<" !A ="<<(!a)<<endl;
	
	cout<<"----------bitwise operator----------"<<endl;
	cout<<"A & B ="<<(a & b)<<endl;	//AND
	cout<<"A | B ="<<(a | b)<<endl;		//OR
	cout<<"A >> B ="<<(a >> b)<<endl;		//LEFT SHIFT
	cout<<"A << B ="<<(a << b)<<endl;		//RIGHT SHIFT
	cout<<" ~A ="<<(~a)<<endl;			//NOT
	cout<<"A ^ B ="<<(a ^ b)<<endl;		//XOR
	
	
	return 0;
	
}
