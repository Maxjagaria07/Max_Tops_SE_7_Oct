#include<iostream>
using namespace std;

class detail
{
	public:
				detail(string fname,string lname,string address)
				{
					cout<<"\nfname is"<<fname;
					cout<<"\nlname is"<<lname;
					cout<<"\naddress is"<<address;
				}
				
				
};


int main()
{
	string a,b,c;
	cout<<"Enter fname : ";
	cin>>a;
	cout<<"Enter lname : ";
	cin>>b;
	cout<<"Enter Address : ";
	cin>>c;
	detail d1(a,b,c);
	return 0;
}