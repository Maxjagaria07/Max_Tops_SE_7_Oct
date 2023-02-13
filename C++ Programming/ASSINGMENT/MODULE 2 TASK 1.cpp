#include<iostream>
using namespace std;

class bank
{
	public:
		void account()
		{
			string a,b,c,d,e,f,g,h,i,j;
			
			cout<<"NAME OF DEPOSITOR : ";
			cin>>a;
			
			cout<<"ACCOUNT NUMBER";
			cin>>b;
			
			cout<<"TYPE OF ACCOUNT";
			cin>>c;
			
			cout<<"BALANCE AMOUNT IN THE ACCOUNT";
			cin>>d;
			
			cout<<"MEMBER FUNCTION";
			cin>>e;
			
			cout<<"ASSING VALUE";
			cin>>f;
			
			cout<<"DEPOSITED AN AMOUNT";
			cin>>g;
			
			cout<<"WITHDRAW AMOUNT AFTER CHEAKING BALANCE";
			cin>>h;
			
			cout<<"NAME";
			cin>>i;
			
			cout<<"BALANCE";
			cin>>j;


		}
};

int main()
{
	bank obj;
	obj.account();
	return 0;
}