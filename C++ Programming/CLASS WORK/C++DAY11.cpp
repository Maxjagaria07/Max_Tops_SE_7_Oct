#include<iostream>
using namespace std;

class A
{
	public:
			void show()
			{
				cout<<"\nSHOW CLASS A";	
			}	
};

class B : public A
{
	public:
			void show()
			{
				cout<<"\nSHOW CLASS B";	
			}	
};	

class C : public B
{
	public:
			void show()
			{
				A::show();
				B::show();
				cout<<"\nSHOW CLASS C";	
			}	
};
int main()
{
	
	C obj;
	obj.show();
	return 0;
}