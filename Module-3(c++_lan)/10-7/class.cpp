#include <iostream>
using namespace std;

class tops
{
	
	public:
	int id;
	string name;
	
	void display()
	{
		cout<<"your id is :"<<id<<endl;
		cout<<"your name is :"<<name<<endl;
	}
	
};

int main()
{
	int id;
	string name;
		
	cout<<"enter your id :";
	cin>>id;
		
	cout<<"enter your name :";
	cin>>name;
	
	tops t1 = tops();
	
	t1.id = id;
	t1.name =name;
	
	t1.display();	
	
	return 0;
	
	
}
