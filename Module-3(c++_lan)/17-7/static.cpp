//static keyword

#include <iostream>
using namespace std;

class bank
{
	public:
		
	static int count;
	string name = "";
	int acc = 0;
	
	bank(string name,int acc)
	{
		this->name=name;
		this->acc=acc;
		count++;
		cout<<"total Account is :"<<count<<endl;
	}
		
};

int bank :: count = 0;

int main()
{
	bank b1 = bank("divya",456398741258);
	bank b2 = bank("anjali",230654789632);
	bank b3 = bank("dhiraj",456987123065);
	bank b4 = bank("bansi",789654123658);
	bank b5 = bank("nency",461772419365);
	bank b6 = bank("bhavya",468932145687);
	return 0;
}
