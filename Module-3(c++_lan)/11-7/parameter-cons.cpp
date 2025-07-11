//parameterised constructor

#include <iostream>
using namespace std;

class data
{
	
	int id;
	string collage_name;
	public:

	data()
	{
		cout<<"constructor called"<<endl;
	}
	data(int no,string collage)
	{
		id=no;
		collage_name=collage;
	}
	void display()
	{
		cout<<id<<endl;
		cout<<collage_name<<endl;
	}
	
};

int main()
{
	data d1 = data();
	data d2 = data(1,"ROPatel Collage");
	
	d2.display();
	
	return 0;
}
