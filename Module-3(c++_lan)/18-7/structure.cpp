//structure

#include <iostream>
using namespace std;

struct rect
{
	float width,height;	
};

int main()
{
	struct rect r1;
	
	r1.height = 10.5;
	r1.width = 20.6;
	
	cout<<"Area of Rect is :"<<r1.height*r1.width<<endl;
	
	
	
	return 0;
}
