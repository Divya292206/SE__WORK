//dyanamic constructor

#include <iostream>
using namespace std;

class Account
{
	private:
		float account_no;
		float balance;
		
	public:
		Account(float a,float b)
		{
			account_no = a;
			balance = b;
		}
		
	void display()
	{
		cout<<"\n account number :"<<account_no<<endl;
		cout<<"\n Balance is :"<<balance<<endl;
	}
	
};

int main()
{
	float ac;
	float bal;
	
	cout<<"\n enter your account no :";
	cin>>ac;
	
	cout<<"\n enter balance :";
	cin>>bal;
	
	cout<<endl;
	
	if (cin.fail()) 
	{
    	cout << "Invalid input!" << endl;
	}

	
	Account *acc = new Account(ac,bal);
	
	acc->display();
	
	delete acc;
	
	return 0;
}
