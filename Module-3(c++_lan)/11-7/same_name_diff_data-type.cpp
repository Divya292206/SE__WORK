//number of constructor are called same name but use different data type

#include <iostream>
using namespace std;

class data
{
	
	int no;
	string collage;
	
	public:

	data()
	{
		cout<<"*********"<<endl;
	}
	data(string collage)
	{
		this->collage=collage;
	}
	data(int no)
	{
		this->no=no;
	}
	void display()
	{
		cout<<no<<endl;
		cout<<collage<<endl;
	}
	
};

int main()
{
	data d1 = data();
	data d2 = data("R O Patel collage");
	data d3 = data(1);
	
	d1.display();
	d2.display();
	d3.display();


	return 0;
}
