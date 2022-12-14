#include<iostream>
using namespace std;

class function1
{
	public:
			int a;
					void getA()
					{
						cout<<"\n\n\nENTER THE VALUE OF A : ";
						cin>>a;	
					}	
					
					void showA()
					{
						cout<<"\n\n\nTHE VALUE OF A IS "<<a;
					}
					
};

class function2
{
	public:
			int b;
					void getB()
					{
						cout<<"\n\n\nENTER THE VALUE OF B : ";
						cin>>b;
					}	
					
					void showb()
					{
						cout<<"\n\n\nTHE VALUE OF B IS "<<b;
					}
};





int main()
{
	function1 obj1;
	obj1.getA();
	obj1.showA();
	
	function2 obj2;
	obj2.getB();
	obj2.showb();
	
	return 0;
}