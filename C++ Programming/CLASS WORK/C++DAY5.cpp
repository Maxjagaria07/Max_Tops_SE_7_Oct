#include<iostream>
using namespace std;

class function
{
	public:
			function()
			{
				cout<<"\nDEFAULT FUNCTION CALLED";	
			}	
			function(string fname,string lname,int age)
			{
				cout<<"\n\nYOUR FIRST NAME IS : "<<fname;
				cout<<"\nYOUR FIRST NAME IS : "<<lname;
				cout<<"\nYOUR AGE IS : "<<age;
			}
			
};




int main()
{
	function obj1,obj2;
	function obj("MAX","JAGARIA",14);
	
	return 0;
}