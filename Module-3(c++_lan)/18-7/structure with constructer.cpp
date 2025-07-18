//structure with constructer

#include <iostream>
using namespace std;

struct rect
{
	public:
	int width,height;
	rect(int width,int height)
	{
		this->height=height;
		this->width=width;
	}
	
	int display()
	{
		int c = height*width;
		cout<<"Area of rect :"<<endl;	
	}
};

int main()
{
	struct rect r1 = rect(10,20);
	
	r1.display();
	
	return 0;
}
