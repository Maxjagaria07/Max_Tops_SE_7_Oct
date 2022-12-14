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
class function2 : public function1
{
	public:
			int b;	
					void getb()
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
	function2 obj;
	obj.getA();
	obj.getb();
	obj.showA();
	obj.showb();
	return 0;
}