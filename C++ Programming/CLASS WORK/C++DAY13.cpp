#include<iostream>
using namespace std;

class A
{
	public :

				void msg()
				{
					cout<<"HELLO FROM CLASS A.";
				}
};
class B:virtual public A
{
	
};
class C:virtual public A
{
	
};
class D:public C,public B
{
	
};


int main()
{
	D obj;
	obj.msg();
	return 0;
}