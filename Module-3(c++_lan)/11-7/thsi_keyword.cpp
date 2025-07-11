//parameter constructor(same variable use this keyword)

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
	
	c1.display();
	
	return 0;
	
}
