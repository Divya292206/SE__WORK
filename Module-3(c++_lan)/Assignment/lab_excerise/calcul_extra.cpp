//calculator extra

#include <iostream>
using namespace std;

class calcul
{
	float a,b,ans;
	public:
		void add(float a,float b)
		{
			 ans = a+b;
		}
		void sub(float a,float b)
		{
			 ans = a-b;
		}
		void mul(float a,float b)
		{
			 ans = a*b;
		}
		void div(float a,float b)
		{
			 ans = a/b;
		}
		
		void display()
		{
			cout<<"Ans is :"<<ans<<endl;
		}
};

int main()
{
	calcul cal;
	
	float num=10,num1=2;
	
	cout<<"enter number 1 :";
	cin>>num;
	
	cout<<"enter number 2 :";
	cin>>num1;
	
	cal.add(num,num1);
	cal.display();
	
	cal.sub(num,num1);
	cal.display();
	
	cal.mul(num,num1);
	cal.display();
	
	cal.div(num,num1);
	cal.display();
	return 0;
}
