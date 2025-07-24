/*area of a rectangle, and another using Object-Oriented Programming (OOP) with a 
class and object for the same task.*/

#include <iostream>
using namespace std;

class rectangle
{
	float length,width;
	
	public:
		void display()
		{
			cout<<"enter your length :";
			cin>>length;
			cout<<"enter your width :";
			cin>>width;
		}
		
		float calarea()
		{
			return length*width;
		}

};

int main()
{
	rectangle r1 = rectangle();
	r1.display();
	float area=r1.calarea();
	cout<<"area of rectangle :"<<area;
}
