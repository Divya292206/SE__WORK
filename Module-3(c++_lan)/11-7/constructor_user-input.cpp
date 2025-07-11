#include <iostream>
using namespace std;

class tops
{
	public:
		int id;
		string name;
		
		tops(int id,string name)
		{
			this->id=id;
			this->name=name;
		}
		
		void display()
		{
			cout<<id<<endl;
			cout<<name<<endl;
		}
};

int main()
{
	
	
	int id;
	string name;	
	
	cout<<"enter id :";
	cin>>id;
	
	cout<<"enter name :";
	cin>>name;
	
		tops t1 = tops(id,name);

	

	
	
	t1.display();
	
	return 0;
	
	
}
