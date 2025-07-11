//copy constructor

#include <iostream>
using namespace std;

class tops
{
	string name;
	string surname;
	public:
		
		tops(string name,string surname)
		{
			this->name=name;
			this->surname=surname;
		}
		void display()
		{
			cout<<name<<endl;
			cout<<surname<<endl;
		}
};

int main()
{
	tops c1 = tops("divya","parmar");
	tops c2 = tops(c1);
	
	c1.display();
	c2.display();
	return 0;
	
}
