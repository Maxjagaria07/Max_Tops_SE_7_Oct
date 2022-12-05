#include<iostream>
using namespace std;

class code
{
	public:
	      int age;
	      
		  void getage()
		{
			cout<<"ENTER YOUR AGE";
			cin>>age;
				
		}
		void showage()
		{
			cout<<"YOUR AGE IS : "<<age;
		}
};





int main()
{
	
	code ob;
	ob.getage();
	ob.showage();
	return 0;
}