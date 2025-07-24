/*Write two small programs: one using Procedural Programming (POP) to calculate the  */

#include <iostream>
using namespace std;

float calculatearea(float length,float width)
{
	return length*width;
}

int main()
{
	float length,width,area;
	
	cout<<"enter length :";
	cin>>length;
	
	cout<<"enter width :";
	cin>>width;
	
	area=calculatearea(length,width);
	
	cout<<"area of rectangle :"<<area;
	
	return 0;
	
}
