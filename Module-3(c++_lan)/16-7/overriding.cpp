//method overriding

#include <iostream>
using namespace std;

class RBI
{
	public:
		virtual int ract()
		{
			return 0;
		}
};
class SBI : public RBI
{
	public:
		virtual int ract()
		{
			return 8;
		}
};

class ICICI : public RBI
{
	public:
		virtual int ract()
		{
			return 7;
		}
};
class AXIS : public RBI
{
	public:
		virtual int ract()
		{
			return 6;
		}
};

int main()
{
	RBI *r;
	SBI s;
	ICICI i;
	AXIS a;
	
	r = &s;
	cout<<r->ract()<<endl;
	r = &i;
	cout<<r->ract()<<endl;
	r = &a;	
	cout<<r->ract()<<endl;
	return 0;
}
