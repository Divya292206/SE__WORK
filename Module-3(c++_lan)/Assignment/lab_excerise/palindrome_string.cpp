/*/*Write a C++ program to check if a given string is a palindrome (reads the same 
forwards and backwards). */

#include <iostream>
using namespace std;

int main()
{
	int i,len;
	string str;
	bool ispalindrom = true;
	
	cout<<"enter string :";
	cin>>str;
	
	len = str.length();
	
	for(i=0;i<len/2;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			ispalindrom = false;
			break;
		}
	}
	
	if(ispalindrom)
	{
		cout<<str<<" is a palindrom."<<endl;	
	}
	else
	{
		cout<<str<<" is not palindrom."<<endl;
	}
	
	return 0;
}
