//structure with constructer user input

#include <iostream>
using namespace std;

struct rect
{
	public:
	int w,h;
	rect(int width,int height)
	{
		h=height;
		w=width;
	}
	
	int display()
	{
		int c = h*w;
		cout<<"Area of rect :"<<endl;	
	}
};

int main()
{
	int h,w;
	
	cout<<"enter height :";
	cin>>h;
	
	cout<<"enter width :";
	cin>>w;
	
	rect r1(h,w);
	
	r1.display();
	
	return 0;
}
