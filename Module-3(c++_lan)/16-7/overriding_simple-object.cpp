//method overriding

#include <iostream>
using namespace std;

class RBI
{
	public:
		 int ract()
		{
			return 0;
		}
};
class SBI : public RBI
{
	public:
		 int ract()
		{
			return 8;
		}
};

class ICICI : public RBI
{
	public:
		 int ract()
		{
			return 7;
		}
};
class AXIS : public RBI
{
	public:
		 int ract()
		{
			return 6;
		}
};

int main()
{

	SBI s;
	ICICI i;
	AXIS a;
	
	cout<<s.ract()<<endl;
	cout<<i.ract()<<endl;
	cout<<a.ract()<<endl;
	
	return 0;
}
