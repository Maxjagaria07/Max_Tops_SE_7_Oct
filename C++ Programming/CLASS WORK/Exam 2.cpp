#include<iostream>
using namespace std;

	
class Bank
{
	protected:
		int a;
		int b;
	public:
		void Enter(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
			void deposit()
			{
			
				cout<<"Enter The Amount To Deposit :";
				cin>>a;
			}
			void witdraw()
			{
				cout<<"Enter The Amount To Withdrawl :";
				cin>>b;
			}
};

class Bank2:public Bank
{
	public:
		void cheakbalance()
		{
		if(b<=a)
		{
			cout<<"Amount left ="<<a-b;
		}
		else
		{
			cout<<"Insuffecient";
		}
    	}
};

int main()
{
	Bank2 obj;
	obj.deposit();
	obj.witdraw();
	obj.cheakbalance();
	return 0;
}