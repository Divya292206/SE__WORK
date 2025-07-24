//file handling

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char data[100];
	ofstream outfile;
	outfile.open("technology.txt");
	
	cout<<"enter your name :";
	cin.getline(data,100);
	outfile<<data<<endl;
	
	cout<<"enter your age :";
	cin>>data;
	cin.ignore();
	
	outfile.close();
	
	ifstream infile;
	infile.open("technology.txt");
	cout<<"reading data from file ";
	
	infile>>data;
	cout<<data<<endl;
	
	infile.close();
	
	return 0;
	
}
