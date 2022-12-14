#include<iostream>
using namespace std;

class information
{
		public:
				information()
				{
					cout<<"\nWELCOME TO CONSTRUCTOR OF C++\n";
				}
				information(string lname,string fname,int age)
				{
					cout<<"\nYOUR FIRST NAME IS "<<fname;
					cout<<"\nYOUR LAST NAME IS  "<<lname;
					cout<<"\nYOUR AGE IS "<<age;
				}
				
};



int main()
{
	information obj1;
	string fname;
	string lname;
	int age;
	cout<<"ENTER YOUR AGE : ";
	cin>>age;
	cout<<"ENTER YOUR FIRST NAME : ";
	cin>>fname;
	cout<<"ENTER YOUR LAST NAME : ";
	cin>>lname;
	information obj(lname,fname,age);
	return 0;
}