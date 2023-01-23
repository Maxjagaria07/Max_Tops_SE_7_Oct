#include<iostream>
using namespace std;

class Address
{
	public:
		
		string street,city,state;
		
			Address(string street,string city,string state)
			{
				this->street=street;
				this->city=city;
				this->state=state;	
			}	
};

class Employee
{
	private :
		Address*add;
		public :
			
			int id;
			string name;
			
		    Employee(int id,string name,Address*add)
			{
				this->id=id;
				this->name=name;
				this->add=add;
			}
			
			void display()
			{
				cout<<"Your Id : "<<id;
				cout<<"Your Name : "<<name;
				cout<<"Your Street : "<<add->street;
				cout<<"Your City : "<<add->city;
				cout<<"Your State : "<<add->state;
			}
};


int main()
{
	Address obj("Bhatta,Paldi","Ahemedabad","Gujrat");
	Employee obj1(1,"Max Jagaria",&obj);
	obj1.display();
	return 0;
}