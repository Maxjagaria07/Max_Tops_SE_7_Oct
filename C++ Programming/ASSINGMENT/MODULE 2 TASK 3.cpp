#include<iostream>
using namespace std;

class interest
{
	public :
	
				interest(int p,int t,float r)
				{
					cout<<"ENTER PRINCIPLE :"<<p;
					cout<<"ENTER TIME : "<<t;
					cout<<"ENTER RATE :"<<r;	
					cout<<"YOUR SIMPLE INTEREST IS : "<<p*t*r/100;
				}	
};


int main()
{
	
	interest obj(2345,344,1);
	return 0;
}