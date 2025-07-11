//default constructor

#include <iostream>
using namespace std;

class member
{
	public: 
	
	member()
	{
		cout<<"constructor called";
	}
};



int main()
{
	member m1 = member();
	
	return 0;
}
